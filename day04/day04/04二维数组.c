#include <stdio.h>
int main04(void)
{
	int arr[2][3] = { {2,3,5},{22,17,10} };
	

	/*
	* 不完全初始化
	* int arr[2][3] = { {2,3}};    //其余元素为0
	* int arr[2][3] = {0};		//所有元素为0
	* int arr[2][3] = { 2,3,5,22,17,10};	//自动分组
	* int arr[][] = { 2,3,5,22,17,10};		//不行，会报错，必须指定列值
	*/

	//求数组大小
	int len = sizeof(arr);
	printf("%d\n", len);
	//求一行大小,
	int x = sizeof(arr[0]);
	printf("%d\n", x);
	//数组某个元素大小
	int n = sizeof(arr[0][0]);
	printf("%d\n", n);
	//求行数
	int xs = len/sizeof(arr[0]);
	printf("%d\n", xs);
	//求列数
	int ys = x / n;
	printf("%d\n", ys);

	//地址合一
	printf("%p\n", &arr[0]);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0][0]);
	printf("%p\n", arr);

	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

