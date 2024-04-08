#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int Data;
  Struct Node *next;
};

void insertStart (struct Node **head, int data)
{

  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));

  newNode - >
  data = data;
  newNode - >
  next = *head;

  //changing the new head to this freshly entered node
  *head = newNode;
}
void display(struct Node* node)
{
    printf("Linked List: ");
    
    // as linked list will end when Node is Null
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    
    printf("\n");
}
int main ()
{
  struct Node *head = NULL;

  insertStart (&head, 100);
  insertStart (&head, 80);
  insertStart (&head, 60);
  insertStart (&head, 40);
  insertStart (&head, 20);

  display (head);
}