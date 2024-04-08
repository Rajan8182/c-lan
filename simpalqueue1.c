#include<stdio.h>

int a[5] , f =-1 , r =-1;

int Insert(int data)
{
    if(r >= 5-1)
    {
        printf("Queue Is Full... \n");
    }
    else if(f < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else
    {
        r++;
        a[r] = data;
    }
}

int Delete()
{
    if (f == r)
    {
        printf("Queue Is Empty...\n");
        return -1;
    }
    else if (f < 0)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}

int display()
{
    if (f<0)
    {
        printf("queue is empty...\n");
    }

    for (int i = f; i <= r; i++)
    {
        printf("%d\t",a[i]);
    }   
}

int main()
{
    Insert(10);
    Insert(20);
    Insert(30);
    Insert(40);
    //first_Insert(50);
    Insert(40);
    Insert(99);
    display();
}