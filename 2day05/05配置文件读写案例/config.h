#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//������Ϣ�Ľṹ��
typedef struct ConfigInfo
{
	char key[64];
	char value[64];

}cgi;
//��ȡ��Ч����
int getFileLines(char * path);
//��⵱ǰ���Ƿ�����Ч��Ϣ
int isValidLines(char* str);

void parseFile(char* filePath, int len, cgi ** configInfo);
//����key��ȡ��Ӧvalueֵ
char* getInfoByKey(char* key, cgi* configInfo, int len);

void freeSpace(cgi *configInfo,int len);