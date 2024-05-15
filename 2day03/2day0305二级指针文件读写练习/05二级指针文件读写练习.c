#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//要求，将test.txt的内容写到堆区。
int getfileLines(FILE* f)
{
	int num = 0;
	if (!f)
	{
		return -1;
	}
	char buf[1024] = { 0 };
	while (fgets(buf,1024,f)!=NULL)
	{
		//printf("%s", buf);
		num++;
	}
	//rewind(f);			//将光标回卷
	fseek(f, 0, SEEK_SET);
	return num;
}
void readFileData(FILE* f, int len, char** pArray)
{
	if (!f)
	{
		return;
	}
	if (len<=0)
	{
		return;
	}
	if (!pArray)
	{
		return;
	}
	char buf[1024] = { 0 };
	for (size_t i = 0; i < len; i++)
	{
		fgets(buf, 1024, f);
		//printf("%s\n", buf);
		int space = sizeof(buf);
		pArray[i] = malloc(sizeof(char*) * space);
		//char *tmp = malloc(sizeof(char*) * space);
		//strcpy(tmp,buf);
		strcpy(pArray[i],buf);
		//pArray[i] = tmp;
		memset(buf, 0, 1024);
	}
}
void showFileData(int len, char ** pArray)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%s", pArray[i]);
	}

}

void test01()
{
	FILE* f = fopen("./test.txt", "r");
	if (!f)
	{
		perror("fopen failed");
	}
	int len = getfileLines(f);
	//int len = 5;
	printf("%d\n", len);
	char** pArray = malloc(sizeof(char*) * len);
	//读取文件内容并放入堆区
	readFileData(f,len,pArray);
	//展示堆区中数据
	showFileData(len, pArray);

	//释放堆区内容:注释掉的这段内容是否要用，不清楚
	/*for (size_t i = 0; i < len; i++)
	{
		if (pArray[i]!= NULL)
		{
			free(pArray[i]);
			pArray[i] = NULL;
		}
	}*/
	free(pArray);
	pArray = NULL;
	//关闭文件
	fclose(f);
}
int main(void)
{
	test01();

	return EXIT_SUCCESS;
}