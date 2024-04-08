#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *firstinsert(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct node *lastinsert(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *indexinsert(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
}
void linkedtraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = fifth;
    fifth->data = 50;
    fifth->next = NULL;

    printf("1 -> traversal\n2 -> first insert\n3 -> index insert\n4 -> last insert \nchoice any number = ");
    int ch;
    while (1)
    {    
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        linkedtraversal(head);
        break;
    case 2:
        printf("\nfirst instert is running....\n");
        head = firstinsert(head, 100);
        linkedtraversal(head);
        break;
    case 3:
        printf("\nindex insert is running....\n");
        head = indexinsert(head, 90, 1);
        linkedtraversal(head);
        break;
    case 4:
        printf("\n last insert running.....\n");
        head = lastinsert(head, 100);
        linkedtraversal(head);
    default:
        printf("you choice wrong number");
        break;
    }
    }
    return 0;
}