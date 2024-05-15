#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//1、按位取反
void test01()
{
	int num = 2;
	printf("~num = %d\n", ~num);	//-3   (24*0)00000010--->11111101--->10000010+1--->10000011
	//实际只需要关心符号位，即010-->101-->110+1--->111   1符号位代表负数，-3
}
//2、按位与  判断奇数偶数：01010101 & 0000001   前7位必为0，最后一位，若是奇数则为1，否则为0
void test02()
{
	int num = 1213;
	if (num & 1)
	{
		printf("num是奇数");
		
	}
	else
	{
		printf("num是偶数");
	}
}

//3、按位或  01010101 | 00000001 ---> 01010101   同0为0，否则为1
void test03()
{
	int num1 =5;
	int num2 = 3;
	printf("%d\n",num1|num2);		 //101 |  011   -->  111   7
}


//4、按位异或  01010101 | 00000001 --->  01010100  相同为0，不同为1
void test04()
{
	int num1 = 5;
	int num2 = 3;
	printf("%d\n", num1 ^ num2);     // 101 ^  011 --->  110   6
}
//按位异或实现交换变量
void test05()
{
	int num1 = 5;
	int num2 = 3;
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num2 ^ num1;
	printf("%d %d\n", num1,num2);     // 101 ^  011 --->  110   6
}
//扩展，不创建临时变量实现交换变量
void test06()
{
	int num1 = 5;
	int num2 = 3;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("%d %d\n", num1, num2);     // 101 ^  011 --->  110   6
}

//左移运算：00011010<<2  (26)-->  01101000  (26*4=104) 左移x位相当于*2的x次方
void test07()
{
	int num = 20;
	printf("%d\n", num << 2);   //20*4=80
}
//右移运算：00011010>>2 -->  11(/00)000110  右移补位是0/1不确定。不同的系统不一样,如果非负，相当于除以2的x次方
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