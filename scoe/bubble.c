#include<stdio.h>
void bubble()
{
	int i, n, temp, j, arr[10];
	
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