#include <stdio.h>

void BubbleSort(int arr[], int n)
{
	int i, j;
	int temp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - 1); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[8] = { 3,2,4,1,10,12,16,5 }; 
	int i;

	int Size = sizeof(arr) / sizeof(int);
	BubbleSort(arr, Size);

	for (i = 0; i < Size; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}