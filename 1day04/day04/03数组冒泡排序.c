#include <stdio.h>
int main03(void)
{
	int arr[10] = { 3,5,1,7,9,2,0,8,6,4};
	int len = sizeof(arr) / sizeof(arr[0]);
	int temp = arr[0];
	for (int i = 0;i < len-1;i++)
	{
		for (int j = 0;j < len-i-1;j++)
		{
			if (arr[j] < arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for (int i = 0;i < len;i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}