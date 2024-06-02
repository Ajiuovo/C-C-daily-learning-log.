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
	//������������
	srand((unsigned int)time(NULL));
	char* filePath = "./config.txt";
	int len = getFileLines(filePath);
	/*printf("%d\n", len);*/
	cgi* configInfo = NULL;
	//�����ļ�
	parseFile(filePath, len, &configInfo);
	//���Ը���key��ȡvalue
	printf("heroId = %s\n", getInfoByKey("heroId", configInfo, len));
	printf("heroName = %s\n", getInfoByKey("heroName", configInfo, len));
	printf("heroAtk = %s\n", getInfoByKey("heroAtk", configInfo, len));
	printf("heroDef = %s\n", getInfoByKey("heroDef", configInfo, len));
	printf("heroInfo = %s\n", getInfoByKey("heroInfo", configInfo, len));
	freeSpace(configInfo,len);
	configInfo = NULL;

	//�ļ����ܣ�
	code(filePath, "./code.txt");
	//�ļ����ܣ�
	decode("./code.txt", "./decode.txt");

	//���·�ʽ���У�������%hd����ʽ�洢�����ļ�
	/*codeF(filePath, "./codeF.txt");
	decodeF("./codeF.txt", "./decodeF.txt");*/
	return EXIT_SUCCESS;
}