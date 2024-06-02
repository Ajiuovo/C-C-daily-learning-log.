#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "config.h"
#include "code.h"
#include "codeFile.h"
int main(void)
{
	//添加随机数种子
	srand((unsigned int)time(NULL));
	char* filePath = "./config.txt";
	int len = getFileLines(filePath);
	/*printf("%d\n", len);*/
	cgi* configInfo = NULL;
	//解析文件
	parseFile(filePath, len, &configInfo);
	//测试根据key获取value
	printf("heroId = %s\n", getInfoByKey("heroId", configInfo, len));
	printf("heroName = %s\n", getInfoByKey("heroName", configInfo, len));
	printf("heroAtk = %s\n", getInfoByKey("heroAtk", configInfo, len));
	printf("heroDef = %s\n", getInfoByKey("heroDef", configInfo, len));
	printf("heroInfo = %s\n", getInfoByKey("heroInfo", configInfo, len));
	freeSpace(configInfo,len);
	configInfo = NULL;

	//文件加密：
	code(filePath, "./code.txt");
	//文件解密：
	decode("./code.txt", "./decode.txt");

	//以下方式不行，必须以%hd的形式存储加密文件
	/*codeF(filePath, "./codeF.txt");
	decodeF("./codeF.txt", "./decodeF.txt");*/
	return EXIT_SUCCESS;
}