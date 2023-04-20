#include<stdio.h>
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubble_sort(int arr[], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - 1 - i); j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
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
	printf("\n The array sorted(insertion) in ascending order is :\n");
	for (i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	getchar();
	return 0;

}
/*/void merge_sort(int i, int j, int a[], int aux[], int arr, int n)
{
	if (j <= i) {
		return;
	}
	int mid = (i + j) / 2;



	merge_sort(i, mid, a, aux);
	merge_sort(mid + 1, j, a, aux);

	int pointer_left = i;
	int pointer_right = mid + 1;
	int k;


	for (k = i; k <= j; k++) {
		if (pointer_left == mid + 1) {
			aux[k] = a[pointer_right];
			pointer_right++;
		}
		else if (pointer_right == j + 1) {
			aux[k] = a[pointer_left];
			pointer_left++;
		}
		else if (a[pointer_left] < a[pointer_right]) {
			aux[k] = a[pointer_left];
			pointer_left++;
		}
		else {
			aux[k] = a[pointer_right];
			pointer_right++;
		}
	}

	for (k = i; k <= j; k++) {
		a[k] = aux[k];
	}
	printf("Printing the sorted array:\n");

	for (i = 0; i < n; i++)
		printf("%d\n", a[i]);

	return 0;
}*/
