#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//配置信息的结构体
typedef struct ConfigInfo
{
	char key[64];
	char value[64];

}cgi;
//获取有效行数
int getFileLines(char * path);
//检测当前行是否是有效信息
int isValidLines(char* str);

void parseFile(char* filePath, int len, cgi ** configInfo);
//根据key获取对应value值
char* getInfoByKey(char* key, cgi* configInfo, int len);

void freeSpace(cgi *configInfo,int len);