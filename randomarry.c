#include<stdio.h>
#include<stdlib.h>
#define n 10
int main(){
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]= rand()%50;
        printf(" %d ",arr[i]);
    }
   printf("\n");

    int arr2[n];
    for(int i=0;i<n;i++)
    {
        arr2[i]= rand()%50+1;
        printf(" %d ",arr2[i]);
    }
}
