#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void printlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *firstdelete(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node * deleteindex(struct node *head,int ind)
{
      
};


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

    while (1)
    {
        int ch;
        printf("eneter your choice = ");
        scanf("%d",&ch);
        printlist(head);
        switch (ch)
        {
        case 1:
            printf("\nafter delete\n\n ");
            head = firstdelete(head);
            printlist(head);
            break;

        default:
        printf("you choice wrong element");
            break;
        }
    }
    return 0;
}
