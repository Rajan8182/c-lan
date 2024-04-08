#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a,b;

    a.data = 100;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 200;

    
    b.ch = 'B';
    b.ptr = NULL;

    // printf("A dta: [%d]  char: [%d]\n", a.data ,  a.ch);
    // printf("B dta: [%d]  char: [%d]\n", b.data ,  b.ch);

    a.ptr = &b;
    b.ptr = &a;

    printf("B dta: [%d]  char: [%d]\n", a.ptr -> data,  a.ptr -> ch);    
    printf("A dta: [%d]  char: [%d]\n", b.ptr -> data,  b.ptr -> ch);
}