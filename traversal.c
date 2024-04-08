#include<stdio.h>
#include<stdlib.h>

 struct node
 {
    int data;
    struct node *next;
 };

 void traversal(struct node *ptr)
 {
    while (ptr!=NULL)
    {
       printf("element : %d\n",ptr->data);
      ptr= ptr->next;    
    }
    
 }
 int main(){
   struct node *head;
   struct node *second;
   struct node *third;
   struct node *fourth;
   struct node *fifth;

   head   = (struct node *)malloc(sizeof(struct node));
   second = (struct node *)malloc(sizeof(struct node));
   third  = (struct node *)malloc(sizeof(struct node));
   fourth = (struct node *)malloc(sizeof(struct node));
   fifth  = (struct node *)malloc(sizeof(struct node));

   // first node
   head -> data=10;
   head -> next = second;
   
   // second node
   second -> data=20;
   second -> next = third;

   // third node
   third -> data=30;
   third -> next = fourth;

    // fourth node
   fourth -> data=10;
   fourth -> next = fifth;

   // fifth node
   fifth -> data=70;
   fifth -> next = NULL;

   traversal(head);


    return 0;
 }