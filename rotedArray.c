#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60},size = 6;
     
     int roted = arr[size-1];
    for(int i=size;i>0;i--)
    {
         arr[i]= arr[i-1];
    }
    arr[0]=roted;
   for(int i=0;i<size;i++)
   {
        printf("[%d]",arr[i]);
   }
}