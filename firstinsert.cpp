// #include <stdio.h>
// #define n 6
// int a[n],top = -1;

// int insert(int data)
// {
//     if (top >= n-1)
//     {
//         printf("Array is full...\n");
//     }
//     else 
//     {
//         top++;
//         a[top] = data;
//     }
// }
// int display()
// {
//     if (top <0)
//     {
//         printf("Array empty....");
//     }
//     else{
//         for (int i= 0;i<= top;i++)
//         {
//             printf("%d\n",a[i]);
//         }
//     }
//     printf("\n");
// }
// int delete_end()
// {
//     int dlt;
//     cont << "how many element you want delete: ";
//     cin >> dlt;

// }
// int main()
// {
//     insert(10);
//     insert(20);
//     insert(30);
//     insert(40);
//     insert(50);
//     insert(60);
//     insert(70);
//     display();
// }


#include <stdio.h>

void swap(int* a, int* b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int N, int i)
{
    int largest = i;

    int left = 2 * i + 1;

    int right = 2 * i + 2;

    if (left < N && arr[left] > arr[largest])

        largest = left;

    if (right < N && arr[right] > arr[largest])

        largest = right;

    if (largest != i) {

        swap(&arr[i], &arr[largest]);

        heapify(arr, N, largest);
    }
}

void heapSort(int arr[], int N)
{

    for (int i = N / 2 - 1; i >= 0; i--)

        heapify(arr, N, i);

    for (int i = N - 1; i >= 0; i--) {

        swap(&arr[0], &arr[i]);

        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, N);
    printf("Sorted array is\n");
    printArray(arr, N);
}

