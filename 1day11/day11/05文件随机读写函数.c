#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef struct student {
	int age;
	char name[10];
}stu_t;
void write_struct_rand()
{
	stu_t stu[4] = {
		18,"alice",
		19,"bob",
		20,"client",
		40,"james"
	};
	FILE* fp = fopen("test05.txt", "wb");
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	int ret = fwrite(&stu[0], 1, sizeof(stu_t) * 4, fp);
	if (ret == 0)
	{
		perror("fwrite error");
		return -1;
	}
	printf("%d\n", ret);
	fclose(fp);
}
int main05(void)
{
	stu_t s1;
	write_struct_rand();
	FILE* fp = fopen("test05.txt","rb");
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	//fseek  ƫ���ļ���дָ�롣
	fseek(fp, sizeof(stu_t), SEEK_SET);
	fread(&s1, 1, sizeof(stu_t), fp);
	printf("%d %s\n", s1.age, s1.name);
	//ftell  ��ѯ��ǰ�ļ���дָ��ƫ����
	int len = ftell(fp);
	printf("%d\n", len);
	//rewind  ���ļ���дָ��ؾ���ʼλ��
	rewind(fp);
	int len2 = ftell(fp);
	printf("%d\n", len2);
	//��ȡ�ļ���С
	fseek(fp, 0, SEEK_END);
	int len3 = ftell(fp);
	printf("%d\n", len3);
	fclose(fp);
	return EXIT_SUCCESS;
}