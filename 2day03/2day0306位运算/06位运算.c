#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//1����λȡ��
void test01()
{
	int num = 2;
	printf("~num = %d\n", ~num);	//-3   (24*0)00000010--->11111101--->10000010+1--->10000011
	//ʵ��ֻ��Ҫ���ķ���λ����010-->101-->110+1--->111   1����λ��������-3
}
//2����λ��  �ж�����ż����01010101 & 0000001   ǰ7λ��Ϊ0�����һλ������������Ϊ1������Ϊ0
void test02()
{
	int num = 1213;
	if (num & 1)
	{
		printf("num������");
		
	}
	else
	{
		printf("num��ż��");
	}
}

//3����λ��  01010101 | 00000001 ---> 01010101   ͬ0Ϊ0������Ϊ1
void test03()
{
	int num1 =5;
	int num2 = 3;
	printf("%d\n",num1|num2);		 //101 |  011   -->  111   7
}


//4����λ���  01010101 | 00000001 --->  01010100  ��ͬΪ0����ͬΪ1
void test04()
{
	int num1 = 5;
	int num2 = 3;
	printf("%d\n", num1 ^ num2);     // 101 ^  011 --->  110   6
}
//��λ���ʵ�ֽ�������
void test05()
{
	int num1 = 5;
	int num2 = 3;
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num2 ^ num1;
	printf("%d %d\n", num1,num2);     // 101 ^  011 --->  110   6
}
//��չ����������ʱ����ʵ�ֽ�������
void test06()
{
	int num1 = 5;
	int num2 = 3;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("%d %d\n", num1, num2);     // 101 ^  011 --->  110   6
}

//�������㣺00011010<<2  (26)-->  01101000  (26*4=104) ����xλ�൱��*2��x�η�
void test07()
{
	int num = 20;
	printf("%d\n", num << 2);   //20*4=80
}
//�������㣺00011010>>2 -->  11(/00)000110  ���Ʋ�λ��0/1��ȷ������ͬ��ϵͳ��һ��,����Ǹ����൱�ڳ���2��x�η�
void test08()
{
	int num = 20;
	printf("%d\n", num >> 2);		//  20/4=5
}


int main(void)
{
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	test08();


	return EXIT_SUCCESS;
}