
#include <stdio.h>
#include <stdlib.h>


struct Node {
	int data;
	struct Node* next;
};

struct Node *head = NULL;

void insertend(int val)
{
	struct Node *ptr = head;
	struct Node *temp = malloc(sizeof(struct Node));
	temp -> data = val;
	temp -> next = NULL;

	if (head == NULL)
	{
		head = temp;
		return;
	}

	while(ptr -> next != NULL)
	{
		ptr = ptr -> next;
	}
	ptr -> next = temp;
	return;
}

void insertpositions(int val,int positions)
{
	struct Node *ptr = head;
    struct Node *temp = malloc(sizeof(struct Node));
    temp -> data = val;
    temp -> next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }

    while(ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }
    ptr -> next = temp;
    return;
}

void deletpos()
{
	struct Node *ptr = head;
    struct Node *temp = NULL;

    if (head == NULL)
    {
        return;
    }

    if (head -> next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    while(ptr -> next -> next!= NULL)
    {
        ptr = ptr -> next;
    }

    temp = ptr -> next;
    ptr -> next = temp -> next;
    free(temp);
    return;
}
void deletend()
{
	struct Node *ptr = head;
	struct Node *p;
	if (head == NULL)
	{
		head=NULL;
		free(ptr);
		return;
	}
	while (ptr -> next != NULL)
	{
		p = ptr;
		ptr = ptr -> next;
	}

	p -> next = NULL;
	free(ptr);
	return;	
}


void display()
{
	struct Node *ptr = head;
	if (head == NULL)
	{
		printf("List is empty......");
	}

	else
	{
		while(ptr != NULL)
		{
			printf("[%d]",ptr -> data);
			ptr = ptr -> next;
		}
	}
	printf("\n");
}

int main()
{
	insertend(100);
	insertend(200);
	insertend(300);
	insertend(400);
	insertend(500);

	display();
	deletend();
	deletend();
	display();
   
}



