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
//按字符读写
void test01()
{
	//写
	char buf[] = "this is a test.";

	FILE* fp = fopen("./test.txt", "w+");
	if (!fp)
	{
		return;
	}
	printf("%d\n", strlen(buf));		//15
	printf("%d\n", sizeof(buf));		//15+结束符  = 16
	for (size_t i = 0; i < strlen(buf); i++)
	{
		fputc(buf[i], fp);
	}
	fclose(fp);
}
void test02()
{
	//读
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
//按行读写
void test03()
{
	//写
	char* buf[] = { "this is a test.\n","床前明月光\n","疑是地上霜\n"};
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
	//读
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

//按块读写   --- 通常针对自定义类型数据   ---对二进制文件操作   fread(),fwrite()
void test05()
{
	//写	
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
		//fwrite：参数1：数据地址  参数2：块大小  参数3：块个数  参数4：写入文件指针
		fwrite(&tecs[i], sizeof(tec), 1, fp);
	}
	fclose(fp);
	//读
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
//	//读
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


//格式化读写文件:fprintf(),fscanf()
void test07()
{
	//写
	FILE* fw = fopen("./test7.txt", "w");
	if (!fw)
	{
		return;
	}
	fprintf(fw, "hello world %d年 %d月 %d日", 2024, 5, 30);
	fclose(fw);

	//读
	FILE* fr = fopen("./test7.txt", "r");
	if (!fr)
	{
		perror("文件打开失败\n");
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

//随机文件读写函数
//ftell()查看光标位置;rewind()重置光标;fseek()移动光标


int main(void)
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();          //不知道为什么 分开读写就不行
	test07();
	return EXIT_SUCCESS;
}