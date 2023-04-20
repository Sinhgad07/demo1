#include<stdio.h>
#include<conio.h>

#include"Sorting.h"


int main()
{
	int ch;
	int arr[10], i, n;
	while (1)
	{
		printf("\n  Menu  \n");
		printf("\n1.Enter the Element of array.\n");
		printf("\n2.Bubble Sor\n");
		printf("\n3.Insertion Sort\n");
		printf("\n4.Merge sort \n");
		printf("\n5.Exit\n");
		printf("\nEnter the choice :\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("Enter the size of array:");
			scanf("%d", &n);
			printf("Enter the Element of array: ");
			for (i = 0; i < n; i++)
			{
				scanf("%d", &arr[i]);
			}
			break;
		case 2:
			bubble_sort(arr);
			break;
		case 3:
			insertion_sort(arr);
			break;
		case 4:
			merge_sort(arr);
			break;
		case 5:
			exit(0);
			break;
		default:
			break;
		}
	}
}


	


