#include <stdio.h>
 

int binarySearch(int arr[], int low, int high, int number)
{    
    if (low > high) 
    {
    	return -1;
    }
 

    int mid = (low + high)/2;   
 
   
    if (number == arr[mid]) 
    {
    	return mid;
    }
 
    else if (number < arr[mid]) 
    {
    	return binarySearch(arr, low, mid - 1, number);
    }
 

    else 
    {
    	return binarySearch(arr, mid + 1, high, number);
    }
}
 
int main(void)
{
	int number;
	int size;	//array size
	printf("Enter the value of arr size ");
	scanf("%d",&size);	// Input array size
	int arr [size];
	for(int i=0;i<size;i++)
	{
		printf("Enter array value\t");
		scanf("%d",&arr[i]);	// Input array value
	}
	printf("Enter the target value: ");
	scanf("%d", &number);
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int low = 0, high = n - 1;
	int index = binarySearch(arr, low, high, number);
	if (index != -1) 
	{
		printf("Element found at index %d", index);
	}
	else 
	{
		printf("Element not found in the array");
	}
	return 0;
}