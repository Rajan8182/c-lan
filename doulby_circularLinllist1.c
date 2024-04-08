#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insertend(int data)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
   temp->data = data;
   temp->next = NULL;
   temp->prev = NULL;

    if(head == NULL)
    {
        head = temp;
        head->next = NULL;
        head->prev = NULL;
        return;
    }

    while(temp->next!= NULL)
    {
        ptr = ptr -> next;
    }

    ptr->next = temp;
    temp->prev = ptr;
    temp->next = temp;
    head->prev = temp; 
}

void deleteend()
{
    struct node *ptr = head;
    
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    else if(head->prev == head)
    {
        head = NULL;
        free(ptr);
        return;
    }

    while(ptr->next!= head)
    {
        ptr = ptr->next;
    }

    ptr->prev->next = head;
    head->prev = ptr->prev;
    free(ptr);
}

void insertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if(head == NULL)
    {
        temp -> next = temp;
        temp -> prev = temp;
        head = temp;
        return;
    }

    temp -> next = ptr;
    temp -> prev = ptr -> prev;
    ptr -> prev -> next = temp;
    ptr -> prev = temp;
    head = temp;
}

void deleteFirst()
{
    struct node *ptr = head;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    else if(head->next == head)
    {
        head = NULL;
        free(ptr);
        return;
    }

    head = ptr -> next;
    head -> prev = ptr -> prev;
    ptr -> prev -> next = head;
    free(ptr);
}

void insertMid(int val,int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    while(ptr -> data != pos)
    {
        ptr = ptr -> next;
        if(ptr == head)
        {
            printf("Invalid position\n");
            free(temp);
            return;
        }
    }

    temp -> next = ptr -> next;
    temp -> prev = ptr;
    ptr -> next -> prev = temp;
    ptr -> next = temp;
}

void deleteMid(int pos)
{
    struct node *ptr = head;

    while (ptr -> data != pos)
    {
        ptr = ptr -> next;
        if(ptr == head)
        {
            printf("Invalid position\n");
            return;
        }
    }
    ptr -> prev -> next = ptr -> next;
    ptr -> next -> prev = ptr -> prev;
    free(ptr);
}

void display()
{
    struct node *ptr = head;

    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        do
        {
            printf("%d\n",ptr->data);
            ptr = ptr -> next;
        } while (ptr != head);   
        {
            printf("\n");   
        };
        
    }
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    insertend(60);
    insertend(70);

    display();

    deleteend();
    display();

    insertFirst(80);
    insertFirst(90);
    insertFirst(100);
    insertFirst(110);
    insertFirst(120);

    display();

    deleteFirst();
    display();

    insertMid(130,3);
    insertMid(140,4);
    insertMid(150,5);
    insertMid(160,6);
    insertMid(170,7);

    display();

    deleteMid(3);
    deleteMid(4);
    deleteMid(5);
    deleteMid(6);
    deleteMid(7);

    display();

    return 0;

}

