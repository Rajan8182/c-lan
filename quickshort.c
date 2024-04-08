#include<stdio.h>
#include<stdlib.h>
#define n 10
void printarray(int a[])
{
    printf("\n");
   for (int i = 0; i < n; i++)
   {
    printf("[%d] ",a[i]);
   }
   
}
void Quickshort(int a[],int f,int l)
{
    int i,j,temp,pivot;
    if(f<l)
    {
            pivot=f+1;
            i=f,j=l;
        while (i<j)
        {
            printarray(a);
            while (a[i]<=a[pivot])
            i++;
            while (a[j]>a[pivot])
            j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
               temp=a[pivot];
               a[pivot]=a[j];
               a[j]=temp;

           Quickshort(a,f,j-1);
           Quickshort(a,j+1,l);

    }
}
int main()
{
    int a[n],i;
    for ( i = 0; i < n; i++)
    {
        a[i]= rand()%90+1;
    }
    printarray(a);
    printf("shorting is running right now\n");
    Quickshort(a,0,n-1);
    printf("\n shorting complete");
    printarray(a);

}
