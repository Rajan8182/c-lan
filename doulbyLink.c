#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node* head = NULL;
struct node* tail = NULL;

void inserthead(int data)
{
    struct node* ptr = head;
    if (head == NULL)
    {
        struct node* temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        struct node* temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->next = head;
        temp->prev = NULL;
        head->prev = temp;
        head = temp;
    }
}

void insertend(int data)
{
    struct node* ptr = head;
    if (head == NULL)
    {
        struct node* temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        struct node* temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        while (ptr -> next != NULL)
        {
            ptr = ptr -> next;
        }
        temp->prev = ptr; // Correct linking to the previous node after traversal
        ptr->next = temp;
        tail = temp;
    }
}


void deletehead()
{
    struct node* ptr = head;
    if (head == NULL)
    {
        return;
    }
    if (head -> next == NULL) // Check if head is the only node
    {
        head = NULL;
    }
    else
    {
        head = head -> next;
        head -> prev = NULL;
    }
    ptr -> next = NULL;
    free(ptr);
}

void deleteend()
{
    if (tail == NULL)
    {
        return;
    }
    struct node* ptr = tail;
    if (tail->prev == NULL)
    {
        head = NULL;
        tail = NULL;
        free(ptr);
        return;
    }
    struct node* prevnode = tail->prev;
    prevnode->next = NULL;
    tail = prevnode;
    free(ptr);
}










































