#include<stdio.h>

void printarray(int* A,int n)
{
      for(int i=0;i<n;i++)
      {
        printf("|%d|",A[i]);
      }
      printf("\n");
}   
void selectionSort(int *A, int n){
    int num, temp;
    printf("selction short is runing...\n");
    for (int i = 0; i < n-1; i++)
    {
        num = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[num])
            {
                num = j;
            }
        }
        temp = A[i];
        A[i] = A[num];
        A[num] = temp;
    }
}

int main(){
    int A[]={55,12,3,5,62,18,88},n=7;
    printarray(A,n);//before sorting
    selectionSort (A,n);//sorting  program
    printarray(A,n);//sorting

}
