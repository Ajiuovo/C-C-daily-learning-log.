#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void write_file()
{
	FILE* fp = fopen("test01.txt", "w");
	
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	fprintf(fp,"%d%c%d=%d\n", 2, '+', 8, 2 + 8);
	fclose(fp);
	
}
void write_file2()
{
	FILE* fp = fopen("test0102.txt", "w");

	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	fprintf(fp, "%d%c%d=%d\n", 2, '+', 8, 2 + 8);
	fprintf(fp, "%d%c%d=%d\n", 3, '+', 8, 3 + 8);
	fprintf(fp, "%d%c%d=%d\n", 4, '+', 8, 4 + 8);
	fclose(fp);
}
void read_file()
{
	FILE* fp = fopen("test01.txt", "r");
	int a, b,c;
	char d;
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	fscanf(fp, "%d%c%d=%d\n", &a, &d, &b, &c);
	printf(" %d%c%d=%d\n",a, d, b, c);
	fclose(fp);

}
void read_file2()
{
	FILE* fp = fopen("test0102.txt", "r");
	int a, b, c;
	char d;
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	fscanf(fp, "%d%c%d=%d\n", &a, &d, &b, &c);
	printf(" %d%c%d=%d\n", a, d, b, c);
	fscanf(fp, "%d%c%d=%d\n", &a, &d, &b, &c);
	printf(" %d%c%d=%d\n", a, d, b, c);
	fscanf(fp, "%d%c%d=%d\n", &a, &d, &b, &c);
	printf(" %d%c%d=%d\n", a, d, b, c);
	//a = 10;
	fscanf(fp, "%d%c%d=%d\n", &a, &d, &b, &c);		//�߽�������洢��ȡ�����ݿռ䣬Ҫ��ʹ��֮ǰ��գ���a���¸�ֵ��������ˣ�,��ȡ�ڼ䲻�������¸�ֵ��
	printf(" %d%c%d=%d\n", a, d, b, c);
	fclose(fp);
}
void read_file3()
{
	FILE* fp = fopen("test0102.txt", "r");
	int a, b, c;
	char d;
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	while(1)
	{
		fscanf(fp, "%d%c%d=%d\n", &a, &d, &b, &c);
		printf(" %d%c%d=%d\n", a, d, b, c);			//����ǰ�棬���û�������û�������ӡ
		if (feof(fp))
			break;
		// printf(" %d%c%d=%d\n", a, d, b, c);		//������ں��棬���һ���޷���ӡ
	}
	fclose(fp);
}
void read_file4()			//�鿴��fgets����������2��fscanf���ȼ����һ���Ƿ���ϸ�ʽƥ�䣬��������ϣ�����ǰ�����ļ���������ֻ�����û��������д�ӡ��fgets�������ʽƥ�䣬��ʹֻ�л���Ҳ��������ӡ��
{
	FILE* fp = fopen("test0102.txt", "r");
	char buf[4096] = {0};
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	while (1)
	{
		memset(buf, 0, 4096);
		fgets(buf, 1024, fp);
		printf(" %s", buf);
		if (feof(fp))
			break;
	}
	fclose(fp);
}
int main01(void)
{
	//write_file();
	write_file2();
	getchar();
	//read_file();
	//read_file2();
	read_file3();
	//read_file4();
	return EXIT_SUCCESS;
}