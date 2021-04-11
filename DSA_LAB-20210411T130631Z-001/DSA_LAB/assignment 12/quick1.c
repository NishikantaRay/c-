//Nishikanta Ray
//sec-c2
//roll no-2
//sic-190410294
#include<stdio.h> 
void swap(int* a, int* b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 
int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high];
	int i = (low - 1);
	int j=low; 
	while(j<high)
	{ 
		if (arr[j] < pivot) 
		{ 
			i++; 
			swap(&arr[i], &arr[j]); 
		}
		j++; 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i +1); 
} 
void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int j = partition(arr, low, high);  
		quickSort(arr, low, j - 1); 
		quickSort(arr, j + 1, high); 
	} 
} 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 
int main() 
{ 
	int arr[10],size,i;
	printf("enter the range\n");
	scanf("%d",&size);
	printf("enter the array");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	quickSort(arr, 0, size-1); 
	printf("Sorted array:\n"); 
	printArray(arr, size); 
	return 0; 
} 

