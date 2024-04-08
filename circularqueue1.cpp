#include <stdio.h>
using namespace std;
#define size 5
int front = -1, rear = -1;
int arr[size];
// int size = 5;

// Check if the queue is full
int full()
{
    if((front == rear + 1) || (front == 0 && rear == size -1))
    return 0;
}

// check if the queue is eampty
int eampty()
{
    if (front == -1)
    return 1;
    return 0;
}

// check if queue is element
void element (int element)
{
    if (full())
        printf("\n queue is full \n");
    else
    {
        if(front == -1)front = 0;
        rear = (rear + 1) % size;
        arr[rear] = element;
        printf("\n Inserted -> %d", element);
    }
}

int  Deleted() {
  int element;
  if (eampty()) {
    printf("\n Queue is empty !! \n");
    return (-1);
  } else {
    element = arr[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
   
    else {
      front = (front + 1) % size;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
  }
}




int main() {
  
  return 0;
}