#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct students
{
	char name[15];	//15--------->16
	size_t age;		//4--------->4
	char tel[15];	//15--------->16
	float score[3];	//12--------->12
	char sex;		//1--------->4
}stu;

struct students2
{
	char *p;	//4				8-4=4>2
	char arr[2];	//2			4-2=2<4，空出两个
	int c;		//4				
	short d;	//2			16，共空4个
	double e;	//8			8-8=0
	long g;		//4			8-4=4<8			32，共空8个
	float f[2];		//8				40，共空8个
}stu2;

struct students3
{
	float f[2];		//8				
	double e;	//8			16
	char* p;	//4			8-4=4
	int c;		//4			24
	long g;		//4			8-4=4>2
	short d;	//2			4-2=2
	char arr[2];	//2		24+8=32,相比students2节省八位空间
}stu3;


int main04(void)
{
	printf("%d\n",sizeof(stu));	//不是52而是56：因为结构体需要根据结构体内成员最大数据类型进行内存对齐。
	printf("%d\n", sizeof(stu2));
	printf("%d\n", sizeof(stu3));
	//总结：按照结构体成员类型大小从上到下编写结构体，最节省空间，但可能不利于阅读，写代码时要两者权衡。
	return EXIT_SUCCESS;
}

