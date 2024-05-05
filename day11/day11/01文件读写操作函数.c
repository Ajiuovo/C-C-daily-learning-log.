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
	fscanf(fp, "%d%c%d=%d\n", &a, &d, &b, &c);		//边界溢出。存储读取的数据空间，要在使用之前清空（对a重新赋值后输出变了）,读取期间不可以重新赋值。
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
		printf(" %d%c%d=%d\n", a, d, b, c);			//放在前面，利用缓冲区还没清空来打印
		if (feof(fp))
			break;
		// printf(" %d%c%d=%d\n", a, d, b, c);		//如果放在后面，最后一行无法打印
	}
	fclose(fp);
}
void read_file4()			//查看与fgets的区别：特性2：fscanf会先检查下一行是否符合格式匹配，如果不符合，就提前结束文件读操作，只能利用缓冲区进行打印。fgets不会检查格式匹配，即使只有换行也会照样打印。
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