#include <stdio.h>
#include <stdlib.h>
#define n 5
int linearSearch(int a[], int b)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (b == a[i])
            return i + 1;
    }
    return -1;
}
int main()
{
    int a[n], i, c;
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 50 + 2;
         printf("[%d] ", a[i]);
    }
    printf("\n enter search element: ");
    scanf("%d", &c);
    
    int d = linearSearch(a,c);
    if (d == -1)
    {
        printf("Not found element.");
    }
    else
    {
        printf(" %d position found", d);
    }
}