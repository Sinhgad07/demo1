#include<stdio.h>
#include<conio.h>

#include"Sorting.h"


int main()
{
	int arr[10], i, n;
	printf("Enter the size of array:");
	scanf("%d", &n);
	printf("Enter the Element of array: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int* sorted = bubble_sort(arr);
	int* sorted1 = insertion_sort(arr);
	int* sorted2 = merge_sort(arr);

}


	


