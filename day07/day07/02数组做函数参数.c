#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void sort_bubble(int arr[]);
int main02(void)
{
	int arr[] = { 13,543,23,6576,5213,34,623,86,12,24 };
	int n = sizeof(arr) / sizeof(arr[0]);
	sort_bubble(arr,n);
	printf("sizeof(arr)=%d\n", sizeof(arr));	
	for (size_t i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	return EXIT_SUCCESS;
}

void sort_bubble(int arr[],int n)
{
	printf("sizeof(arr)=%d\n", sizeof(arr)); 
	for (size_t i = 0; i < n-1; i++)
	{
		for (size_t j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}

		}

	}
}