#include "myhead.h"
void print_arr(int arr[])
{
	//int n = sizeof(arr) / sizeof(arr[0]);			//�漰��ָ�����⣬����������ָ��ѭ���ĳ��ȣ�������n����
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);

	}
	putchar('\n');
}