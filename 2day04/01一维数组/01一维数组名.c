#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void test01()
{
	//Q��һά�������ǲ���ָ��
	int arr[3] = { 0,1,2 };
	printf("%d\n", sizeof(arr));		//12��ָ��Ӧ��ʼ�մ�С��4�����������������ܵȼ���ָ��
	//ͨ�����԰�����������ָ����
	//���������������һά����������ָ���һ��Ԫ�ص�ָ��
	//1��sizeof()
	//2����������ȡ��ַ �õ���������ָ�룬��ֵ�ϵ��������������ʼλ�õ�ַ�������ϴ�������������ռ�ڴ�Ĵ�С������������������ĳ���
	printf("%d\n", &arr);
	printf("%d\n", &arr+1);

	//arr������  ��һ�����鳣��  ָ���ָ�򲻿����޸ģ���ָ��ָ���ֵ���Ը�
	arr[0] = 100;
	//arr = NULL;	//������

	//����ָ�������ɲ�����Ϊ���������ԣ�ͨ��ָ��ƫ��ʵ��
	int* p = arr;
	p = p + 3;
	printf("%d\n", p[-1]);		//p[-1]��arr[-1]
	printf("%d\n", *(p-2));
	
}
int main(void)
{
	test01();


	return EXIT_SUCCESS;
}