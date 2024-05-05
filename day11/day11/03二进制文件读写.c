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
void write_struct()
{
	stu_t stu[4] = {
		18,"alice",
		19,"bob",
		20,"client",
		40,"james"
	};
	FILE* fp = fopen("test03.txt", "w");
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	int ret = fwrite(&stu[0], 1, sizeof(stu_t)*4, fp);
	if (ret == 0)
	{
		perror("fwrite error");
		return -1;
	}
	printf("%d\n", ret);
	fclose(fp);
}
//读四个元素
void read_struct2()
{
	stu_t bufs[4];	//stu_t *s1 = malloc(sizeof(stu_t)*4096);   free(s1);
	FILE* fp = fopen("test03.txt", "r");
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	int i = 0;
	while (1)
	{
		int ret = fread(&bufs[i], 1, sizeof(stu_t), fp);
		if (ret == 0)		//替代feof()函数，判断读到文件结尾与否
		{
			break;
		}
		printf("ret=%d\n", ret);
		printf("%d  %s\n", bufs[i].age, bufs[i].name);
		i++;
	}	
	fclose(fp);
}

//读一个元素
void read_struct()
{
	stu_t buf;
	FILE* fp = fopen("test03.txt", "r");
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	int ret = fread(&buf, 1, sizeof(stu_t), fp);
	if (ret == 0)
	{
		perror("fread error");
		return -1;
	}
	printf("ret=%d\n", ret);
	printf("%d  %s\n",buf.age,buf.name);
	fclose(fp);
}
int main03(void)
{
	write_struct();
	//read_struct();
	read_struct2();	//虽然是以二进制方式存储，直接以记事本打开会乱码。但写出后依然正常显示。
	return EXIT_SUCCESS;
}