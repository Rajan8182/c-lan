#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        head->next = head;
        head->prev = head;
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->prev = ptr;
    temp->next = head;
    head->prev = temp;
}

void deleteEnd()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is already empty....");
        return;
    }
    else if (head->next == head)
    {
        head = NULL;
        free(ptr);
        return;
    }

    while (ptr->next != head)
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
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        head = temp;
        return;
    }

    temp->next = ptr;
    temp->prev = ptr->prev;
    ptr->prev->next = temp;
    ptr->prev = temp;
    head = temp;
}

void deleteFirst()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is already empty....");
        return;
    }
    else if (head->next == head)
    {
        head = NULL;
        free(ptr);
        return;
    }

    head = ptr->next;
    head->prev = ptr->prev;
    ptr->prev->next = head;
    free(ptr);
}

void insertMid(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    while (ptr->data != pos)
    {
        ptr = ptr->next;
        if (ptr == head)
        {
            printf("Position not found in the list...");
            free(temp);
            return;
        }
    }

    temp->next = ptr->next;
    temp->prev = ptr;
    ptr->next->prev = temp;
    ptr->next = temp;
}

void deleteMid(int pos)
{
    struct node *ptr = head;

    while (ptr->data != pos)
    {
        ptr = ptr->next;
        if (ptr == head)
        {
            printf("Position not found in the list...");
            return;
        }
    }

    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    free(ptr);
}

void display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is empty....");
    }
    else
    {
        do
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        } while (ptr != head);

        printf("\n");
    }
}

int main()
{
    int choice, value, position;

    while (1)
    {
        printf("************************************************\n");
        printf("||=================|| MENU ||=================||\n");
        printf("************************************************\n");
        printf("1. last Insert \n");
        printf("2. last Delete \n");
        printf("3. first Insert\n");
        printf("4. first Delete\n");
        printf("5. mid Insert \n");
        printf("6. mid Delete \n");
        printf("7. Display the linked list\n");
        printf("8. Exit\n");
        printf("************************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            insertEnd(value);
            break;

        case 2:
            deleteEnd();
            break;

        case 3:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            insertFirst(value);
            break;

        case 4:
            deleteFirst();
            break;

        case 5:
            printf("Enter the position to insert: ");
            scanf("%d", &position);
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            insertMid(value, position);
            break;

        case 6:
            printf("Enter the position to delete: ");
            scanf("%d", &position);
            deleteMid(position);
            break;

        case 7:
            display();
            break;

        case 8:
            exit(0);

        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}