#include <stdio.h>
int main02(void)
{
	int arr[10] = { 1,3,5,7,9,2,6,4,0,8 };
	int temp = arr[0];
	for (int i = 0, j = sizeof(arr) / sizeof(arr[0]) - 1;i<j;i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

	}
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < n;i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}