#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct tecinfo
{
	//char name[21];		//ջ�ռ���
	char* name;			//������Ҫ���ٶѿռ丨��
	int age;

}t;
int main09(void)
{
	struct tecinfo * p = (struct tecinfo*)malloc(sizeof(t));
	p->name =(char *) malloc(sizeof(char) * 21);
	p->age = 18;
	strcpy(p->name, "����");
	printf("%s  %d\n", p->name, p->age);
	printf("%s  %d\n", t.name, t.age);		//p��tû�й�ϵ��ֻ�Ǵ�����һ���µĶѿռ䣬��С��t�Ŀռ�һ�����������ṹ�����
	free(p->name);
	p->name = NULL;
	free(p);
	p = NULL;
	return EXIT_SUCCESS;
}