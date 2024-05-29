#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void test01()
{
	//可读性高
	int arr[3][3] = { {1,2,3},		{4,5,6},		{7,8,9 }	};
	int arr2[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int arr3[][3] = { 1,2,3,4,5,6,6,7,8 };
	printf("%d\n", sizeof(arr));
	//利用二维数组指针访问数组元素6
	int* p = &arr;
	printf("%d\n", arr[1][2]);
	printf("%d\n", *(*(arr + 1) + 2)); 
}
void printfArray(int arr[3][3], int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			printf("%d ", *(*(arr + i) + j));
			arr[i][j] += 1;
		}
	}

}
//void printfArray(int (*arr)[3], int row, int col)
//{
//	for (size_t i = 0; i < row; i++)
//	{
//		for (size_t j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//	}
//
//}
void test02()
{
	int arr[3][3] = { {1,2,3},		{4,5,6},		{7,8,9 } };
	printfArray(arr,3,3);
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
}
int main(void)
{
	//test01();
	test02();

	return EXIT_SUCCESS;
}