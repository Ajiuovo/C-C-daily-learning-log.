#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main12(void)
{
	char* str = "wawigaojg";
	char *str2 = strstr(str, "jgg");
	//str = strstr(str, "jgg");
	/*while(!*str)
	{
		printf("aaaa\n");
		break;
	}*/
	/*while(!*str2)
	{
		printf("aaaa\n");
		break;
	}*/
	/*while(!str2)
	{
		printf("aaaa\n");
		break;
	}*/
	//�ܽᣬstrstr�����ķ���ֵΪnullʱ���ر𣬲�������*str�����Ϊɶ��֪�������ǲ����ԡ�
	//ò������Ϊ������һ����ָ�룬������ָ��ָ��ĵط�Ϊ�ա�
	//���ԣ���������Ϊ�����ص�ʱ�ַ�������������������ͨ��*str���ʣ�Ҳ����ͨ��str[i]�޸�
	return EXIT_SUCCESS;
}


