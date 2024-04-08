#include<stdio.h>

void printarray(int* A,int n)
{
      for(int i=0;i<n;i++)
      {
        printf("[%d]",A[i]);
      }
      printf("\n");
}   
void bubblesort(int* A,int n)
{
    int temp;
   for(int i=0;i<n-1;i++)// for number of pass 
   {
    for(int j=0;j<n-1-i;j++) // for comparison of number  
    {
        if(A[j]>A[j+1])
        {
           temp   =  A[j];
           A[j]   =  A[j+1];
           A[j+1] =  temp; 
        }
    }
   }
}
int main(){
    int A[]={12,3,6,43,24,22,32,34},n=8;
    printarray(A,n);//before sorting
    bubblesort(A,n);//sorting  program
    printarray(A,n);//sorting

}