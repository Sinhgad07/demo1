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

	


