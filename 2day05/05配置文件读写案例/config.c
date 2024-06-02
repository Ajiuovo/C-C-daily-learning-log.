#define _CRT_SECURE_NO_WARNINGS
#include "config.h"

int getFileLines(char * path)
{
	FILE* fr = fopen(path, "r");
	if (!fr)
	{
		perror("�򿪴���");
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
		//�ж��Ƿ�Ϊ��Ч��
		if (isValidLines(buf))
		{
			//��ʼ����
			memset(info[index].key, 0, 64);
			memset(info[index].value, 0, 64);
			//���heroName:aaaa\n
			//��ʽ1��sscanf
			//��ʽ2��
			char* pos = strchr(buf, ':');
			strncpy(info[index].key, buf,pos-buf);
			//strncpy(info[index].value, pos+1,strlen(pos+1));
			//����Ҫ��cpyһ���ַ��������У���Ϊstrlen��ͳ���ַ���ʱҲ��ͳ��\n
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
