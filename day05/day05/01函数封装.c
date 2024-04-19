#include <stdio.h>
#include <Windows.h>

void bubble_sort(int arr[])
{
	
	printf("%d\n", sizeof(arr));
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", len);
	int temp = arr[0];
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void myprint_arr(int arr[])
{
	printf("%d\n", sizeof(arr));
	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}

}

int main(void)
{
	int arr[] ={12, 72, 35, 93, 375, 5, 34, 28, 4};
	printf("%d\n", sizeof(arr));
	myprint_arr(arr);
	bubble_sort(arr);
	myprint_arr(arr);
	return EXIT_SUCCESS;
}