#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->next = head;
}

void insertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->next = head;
    head = temp;
}

void insertMid(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    while (ptr->data != pos)
    {
        ptr = ptr->next;
    }

    temp->next = ptr->next;
    ptr->next = temp;
}

void deleteEnd()
{
    struct node *ptr = head;
    struct node *prev;

    if (head == NULL)
    {
        printf("List is already empty....");
        return;
    }

    while (ptr->next != head)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = head;
    free(ptr);
}

void deleteFirst()
{
    struct node *ptr = head;
    struct node *temp;

    if (head == NULL)
    {
        printf("List is already empty....");
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    temp = head;
    head = head->next;
    ptr->next = head;
    free(temp);
}

void deleteMid(int pos)
{
    struct node *ptr = head;
    struct node *prev;

    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = ptr->next;
    free(ptr);
}

void display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is empty....");
        return;
    }

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);

    printf("\n");
}

int main()
{
     display();

    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);
    insertFirst(50);

    display();
}


//  display();

//     insertFirst(10);
//     insertFirst(20);
//     insertFirst(30);
//     insertFirst(40);
//     insertFirst(50);

//     display();