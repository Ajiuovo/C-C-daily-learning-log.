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
	char arr[2];	//2			4-2=2<4���ճ�����
	int c;		//4				
	short d;	//2			16������4��
	double e;	//8			8-8=0
	long g;		//4			8-4=4<8			32������8��
	float f[2];		//8				40������8��
}stu2;

struct students3
{
	float f[2];		//8				
	double e;	//8			16
	char* p;	//4			8-4=4
	int c;		//4			24
	long g;		//4			8-4=4>2
	short d;	//2			4-2=2
	char arr[2];	//2		24+8=32,���students2��ʡ��λ�ռ�
}stu3;


int main04(void)
{
	printf("%d\n",sizeof(stu));	//����52����56����Ϊ�ṹ����Ҫ���ݽṹ���ڳ�Ա����������ͽ����ڴ���롣
	printf("%d\n", sizeof(stu2));
	printf("%d\n", sizeof(stu3));
	//�ܽ᣺���սṹ���Ա���ʹ�С���ϵ��±�д�ṹ�壬���ʡ�ռ䣬�����ܲ������Ķ���д����ʱҪ����Ȩ�⡣
	return EXIT_SUCCESS;
}

