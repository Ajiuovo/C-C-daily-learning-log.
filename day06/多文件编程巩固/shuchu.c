#include "myhead.h"
void print_arr(int arr[])
{
	//int n = sizeof(arr) / sizeof(arr[0]);			//涉及到指针问题，因此这里必须指明循环的长度，不能用n代替
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);

	}
	putchar('\n');
}