#include<stdio.h>
#include<conio.h>
#include"Sorting.h"
#define size 10

void input_data();

int main()
{
	int ch;
	while (1)
	{
		printf("\nMenun");
		printf("\n1.Enter the array \n");
		printf("\n2.Bubble sort\n");
		printf("\n3.Insertion Sort\n");
		printf("\n4.Merge Sort\n");
		printf("\n0.Exit\n");
		printf("Enter the choice: ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			input_data();
			break;
		case 2:
			bubble();
			break;
		case 3:
			insertion_sort();
			break;
		case 4:
			merge_sort();
			break;
		case 0:
			exit(0);
			break;
		default:
			printf("Invaild!..Please Enter correct choice..");
			break;
		}
	}
}
void input_data()
{
	int arr[10], i, n;
	printf("Enter the size of array:");
	scanf("%d", &n);
	printf("Enter the Element of array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
}
void bubble()
{
	int i, n, temp, j, arr[10];
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - 1 - i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("\n The array sorted in ascending order is :\n");
	for (i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	getchar();
	return 0;
}

void insertion_sort(int arr[], int n)
{
	int i, j, temp;
	for (i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;
		while ((temp < arr[j]) && (j >= 0))
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
}
void merge(int arr[], int beg, int mid, int end)
{
	int i = beg, j = mid + 1, index = beg, temp[size], k;
	while ((i <= mid) && (j <= end))
	{
		if (arr[i] < arr[j])
		{
			temp[index] = arr[i];
			i++;
		}
		else
		{
			temp[index] = arr[j];
			j++;
		}
		index++;
	}
	if (i > mid)
	{
		while (j <= end)
		{
			temp[index] = arr[j];
			j++;
			index++;
		}
	}
	else
	{
		while (i <= mid)
		{
			temp[index] = arr[i];
			i++;
			index++;
		}
	}
	for (k = beg; k < index; k++)
		arr[k] = temp[k];
}
void merge_sort(int arr[], int beg, int end)
{
	int mid;
	if (beg < end)
	{
		mid = (beg + end) / 2;
		merge_sort(arr, beg, mid);
		merge_sort(arr, mid + 1, end);
		merge(arr, beg, mid, end);
	}
}