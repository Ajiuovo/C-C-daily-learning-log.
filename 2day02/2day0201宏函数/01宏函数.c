#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//2��ͨ����Ƶ������С�ĺ�����д�ɺ꺯��
#define MYADD(x,y)	x+y
#define MYADD2(x,y)	((x)+(y))
//3���꺯�������ͨ������һ���̶��ϣ�Ч�ʸߣ�ʡȥ��ͨ������ջ����ջʱ��Ŀ���
//��Ϊ��Ԥ����׶ξͱ��滻�ˣ��Կռ任ʱ��


void test01()
{
	printf("%d\n", MYADD(3, 5));
	//1���꺯����Ҫ��С�������Σ���֤�����������
	printf("%d\n", MYADD(3, 5)*10);			//3+5*10
	printf("%d\n", MYADD(3, 5) * 10);       //((3)+(5))*10
}
int main(void)
{
	test01();
	return EXIT_SUCCESS;
}