#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef struct Teacher
{
	char *name;//0-3
	int b;//4-7
}tec;
//���ַ���д
void test01()
{
	//д
	char buf[] = "this is a test.";

	FILE* fp = fopen("./test.txt", "w+");
	if (!fp)
	{
		return;
	}
	printf("%d\n", strlen(buf));		//15
	printf("%d\n", sizeof(buf));		//15+������  = 16
	for (size_t i = 0; i < strlen(buf); i++)
	{
		fputc(buf[i], fp);
	}
	fclose(fp);
}
void test02()
{
	//��
	char c;
	FILE* fw = fopen("./test.txt","r");
	if (!fw)
	{
		return;
	}
	while ((c=fgetc(fw))!= EOF)
	{
		printf("%c", c);
	}
	fclose(fw);
}
//���ж�д
void test03()
{
	//д
	char* buf[] = { "this is a test.\n","��ǰ���¹�\n","���ǵ���˪\n"};
	FILE* fp = fopen("./test3.txt", "w+");
	if (!fp)
	{
		return;
	}
	printf("%d\n", strlen(buf));		//3
	//printf("%d\n", sizeof(buf));		//12
	for (size_t i = 0; i < strlen(buf); i++)
	{
		fputs(buf[i], fp);
	}
	fclose(fp);
}
void test04()
{
	//��
	char c[64] = { 0 };
	FILE* fw = fopen("./test3.txt", "r");
	if (!fw)
	{
		return;
	}
	while (!feof(fw))
	{
		memset(c, 0, 64);
		fgets(c, 64, fw);
		printf("%s", c);

	}
	fclose(fw);
}

//�����д   --- ͨ������Զ�����������   ---�Զ������ļ�����   fread(),fwrite()
void test05()
{
	//д	
	FILE* fp = fopen("./test5.txt", "wb");
	if (!fp)
	{
		return;
	}
	tec tecs[] = {
		{"t1",18},
		{"t2",19},
		{"t3",20}
	};
	printf("%d\n", strlen(tecs));		//3
	//printf("%d\n", sizeof(buf));		//12
	for (size_t i = 0; i < strlen(tecs); i++)
	{
		//fwrite������1�����ݵ�ַ  ����2�����С  ����3�������  ����4��д���ļ�ָ��
		fwrite(&tecs[i], sizeof(tec), 1, fp);
	}
	fclose(fp);
	//��
	FILE* fw = fopen("./test5.txt", "rb");
	if (!fw)
	{
		return;
	}
	tec temp[3];
	fread(&temp, sizeof(tec), 3, fw);
	for (size_t i = 0; i < 3; i++)
	{
		printf("%s %d\n", temp[i].name, temp[i].b);
	}
	fclose(fw);
}
//void test06()
//{
//	//��
//	FILE* fw = fopen("./test5.txt", "rb");
//	if (!fw)
//	{
//		return;
//	}
//	tec temp[3];
//	fread(&temp, sizeof(tec), 3, fw);
//	for (size_t i = 0; i < 3; i++)
//	{
//		printf("%s %d\n", temp[i].name, temp[i].b);
//	}
//	fclose(fw);
//}


//��ʽ����д�ļ�:fprintf(),fscanf()
void test07()
{
	//д
	FILE* fw = fopen("./test7.txt", "w");
	if (!fw)
	{
		return;
	}
	fprintf(fw, "hello world %d�� %d�� %d��", 2024, 5, 30);
	fclose(fw);

	//��
	FILE* fr = fopen("./test7.txt", "r");
	if (!fr)
	{
		perror("�ļ���ʧ��\n");
		return;
	}
	int a, b, c;
	char buf[1024] = { 0 };
	while (!feof(fr))
	{
		fscanf(fr, "%s", buf);
		printf("%s", buf);
	}
	fclose(fr);
}

//����ļ���д����
//ftell()�鿴���λ��;rewind()���ù��;fseek()�ƶ����


int main(void)
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();          //��֪��Ϊʲô �ֿ���д�Ͳ���
	test07();
	return EXIT_SUCCESS;
}