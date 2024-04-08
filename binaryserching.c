#include <stdio.h>
#include <stdlib.h>
#define n 7
int a[n] = {1,15,18,19,26,28,39};  
int BinarySearch(int x)
{
    int l,h,mid;
    l=0,h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==x)
          return mid+1;
        else if(a[mid]<x)
          l = mid+1;
        else
          h = mid-1;
    }
    return -1;
    
}
int main()
{
    for(int i=0;i<=n;i++){
    printf(" [%d] ",a[i]);
    }
    int x;
    printf("\n enter your serching elements = ");
    scanf("%d",&x);    
    int b=BinarySearch(x);
    if(b==-1)
    printf("element is not found");
    else
    printf("your serching element position is %d",b);
    


}














// {
//     int l, h, mid;
//     l = 0, h = n-1;
//     while (l<=h)
//     {
//         mid = (l+h)/2;
//         if(a[mid]==x)
//             return mid+1;
//         else if(a[mid]<x)
//             l = mid + 1;
//         else
//             h = mid - 1;    
//     } 
//     return -1;
// }
// int main()
// {
    
//     int i, c;
//     for (i = 0; i < n; i++)
//         printf("%d  ", a[i]);
//     printf("\nEnter search element: ");
//     scanf("%d", &c);
//     int b = BinarySearch(c);
//     if (b == -1)
//         printf("Not found Element.");
//     else
//         printf("Element is at %d position found", b);
// }