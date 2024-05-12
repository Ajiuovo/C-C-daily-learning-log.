#include "myhead.h"
void sort_bullle(int arr[])
{
	//int n = sizeof(arr) / sizeof(arr[0]);     
	int tmp = arr[0];

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}