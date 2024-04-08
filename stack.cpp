#include <stdio.h>
#define n 6
int a[n],top = -1;

int insert(int data)
{
    if (top >= n-1)
    {
        printf("Array is full...\n");
    }
    else 
    {
        top++;
        a[top] = data;
    }
}
int display()
{
    if (top <0)
    {
        printf("Array empty....");
    }
    else{
        for (int i= 0;i<= top;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    printf("\n");
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);
    display();
}