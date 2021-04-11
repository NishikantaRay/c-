//Nishikanta Ray
//sec-c2
//Roll no-2
//sic-190410294
#include <stdio.h>
#include<stdlib.h>
void swap(int *a, int *b) 
{
	int temp = *a;
    *a = *b;
    *b = temp;
}  
void heapify(int arr[], int n, int i) 
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
      largest = left;
    if (right < n && arr[right] > arr[largest])
      largest = right;
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
}  
void heapSort(int arr[], int n)
{
	int i,j;
    for (i = (n / 2) - 1; i >= 0; i--)
      heapify(arr, n, i);
    for (j = n - 1; j >= 0; j--) {
      swap(&arr[0], &arr[j]);
      heapify(arr, j, 0);
    }
}
void printArray(int arr[], int n)
{
	int i;
    for (i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
}
int main() 
{
	int i,arr[15],n;
	printf("Enter the range");
	scanf("%d",&n);
	printf("Enter the number");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
    heapSort(arr, n);
    printf("Sorted array is \n");
    printArray(arr, n);
  }
