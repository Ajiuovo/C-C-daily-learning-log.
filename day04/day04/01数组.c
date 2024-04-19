#include <stdio.h>

int main0101(void)
{
	int arr[10] = { 1,3,5,7,9,2,6,4,0,8 };
	printf("arr=%p\n", arr);	//数组名为地址，是数组首元素地址
	printf("&arr[0]=%p\n", &arr[0]);   //取数组首元素地址名
	printf("&arr[1]=%p\n", &arr[1]);
	printf("&arr[2]=%p\n", &arr[2]);
	printf("&arr[3]=%p\n", &arr[3]);
	return 0;
}

int main0102(void)
{
	int arr[10] = { 1,3,5,7,9,2,6,4,0,8 };
	printf("数组大小：%d\n", sizeof(arr));
	printf("数组元素大小：%d\n", sizeof(arr[0]));
	printf("数组元素个数：%d\n", sizeof(arr)/ sizeof(arr[0]));
	return 0;
}

//数组初始化
int main0103(void)
{
	int arr[10] = { 1,3,5,7,9,2,6,4};  //未初始化元素默认为0
	//int arr[] = { 1,3,5,7,9,2};        //系统自动计算数组大小、
	//int arr[10];      //随机初始化
	//int arr[10] = { 0 }; //所有元素初始化为0
	//int arr[] = { 0 };   //只有一个元素，为0
	int n = sizeof(arr); // sizeof(arr[0]);
	for (int i = 0;i < n;i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
	 
}