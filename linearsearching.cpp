#include<iostream>
#include<stdlib.h>
using namespace std;
int arr[50];
void insert()
{
  for(int i=0;i<50;i++)
  {
    arr[i]=rand()%50+1;
  }
}
void dispaly()
{
  for(int i=0;i<50;i++)
  {
    cout<<arr[i]<<" ";
  }
}
void surch(int value)
{
  for(int i=0;i<50;i++)
  {
    
    if(arr[i]==value)
    {
      cout<<"your value is present in arry " << i <<endl;
    }
    // else
    // {
    //   cout<<"your value is not present in arry "<<endl;
    // }

  }
}

int main()
{
  insert();
  dispaly();
  int a; 
  scanf("%d",&a);
    
  surch(a);

}