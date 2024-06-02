#define _CRT_SECURE_NO_WARNINGS
#include "config.h"

int getFileLines(char * path)
{
	FILE* fr = fopen(path, "r");
	if (!fr)
	{
		perror("打开错误");
		return EXIT_FAILURE;
	}
	char buf[1024] = { 0 };
	int lines = 0;
	while (fgets(buf, 1024, fr) != NULL)
	{
		if (isValidLines(buf))
		{
			lines++;
		}		
		memset(buf, 0, 1024);
	}
	fclose(fr);
	return lines;
}

int isValidLines(char* str)
{
	if (strchr(str, ':'))
	{
		return 1;
	}
	return 0;
}

void parseFile(char* filePath, int len, cgi** configInfo)
{
	cgi * info = malloc(sizeof(cgi) * len);
	if (!info)
	{
		return;
	}
	FILE* fr = fopen(filePath, "r");
	if (!fr)
	{
		return;
	}
	char buf[1024] = { 0 };
	int index = 0;
	while (fgets(buf,1024,fr)!=NULL)
	{
		//判断是否为有效行
		if (isValidLines(buf))
		{
			//开始解析
			memset(info[index].key, 0, 64);
			memset(info[index].value, 0, 64);
			//拆分heroName:aaaa\n
			//方式1：sscanf
			//方式2：
			char* pos = strchr(buf, ':');
			strncpy(info[index].key, buf,pos-buf);
			//strncpy(info[index].value, pos+1,strlen(pos+1));
			//这里要少cpy一个字符，即换行，因为strlen在统计字符数时也会统计\n
			strncpy(info[index].value, pos+1,strlen(pos+1)-1);

			index++;
		}
		memset(buf, 0, 1024);
	}
	*configInfo = info;


}

char* getInfoByKey(char* key, cgi* configInfo, int len)
{
	for (size_t i = 0; i < len; i++)
	{
		if (strcmp(key, configInfo[i].key) == 0)
		{
			return configInfo[i].value;
		}
	}
	return NULL;
}

void freeSpace(cgi* configInfo,int len)
{
	if (configInfo != NULL)
	{
		free(configInfo);
		configInfo = NULL;
	}
}
