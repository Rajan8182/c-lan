#include <stdio.h>
#include <stdlib.h>
#define n 5
int linearSearch(int a[], int b)
{
    int i,count=0;
    for (i = 0; i < n; i++)
    {
        if (b == a[i])
        {
            printf("position is : %d \n",i+1);
        }
    }
    return -1;
}
int main()
{
    int a[n], i, c;
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 5 + 2;
         printf("[%d] ", a[i]);
    }
    printf("\n enter your serching number: ");
    scanf("%d", &c);
    
    linearSearch(a,c);
    // if (d == -1)
    // {
    //     printf("Not found element.");
    // }
    // else
    // {
    //     printf(" %d position found", d);
       

    // }
}