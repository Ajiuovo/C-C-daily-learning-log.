#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int str_times(char* str, char* substr, int n);
int str_times2(char* str, char* substr, int n);
int main11(void)
{
	char* str = "hellolllolloef";
	char* substr = "llo";
	int n = 0;
	int ret = str_times(str, substr, n);
	printf("%d", ret);
	return EXIT_SUCCESS;
}

//ͳ���ַ����У��Ӵ����ִ���:Ϊʲô��������أ������  ��������Ϊstrstr�ķ���ֵ�����str�в���substr������һ��ָ���ַ���͵�null������
int str_times(char* str, char* substr, int n)
{

	while (str)
	{
		str = strstr(str, substr);	//str="llolllolloef"	str="llolloef"		str="lloef"			str="000000"
		//printf("%s",str);			//���ﲻ��printf("%s",*str);  ��֪��Ϊɶ,,,,strstr�������ص���һ��������ַ���ָ�룬��ͬ�ڳ����char* str1��ֻ�����������ķ�ʽ�����������*����������������[]�ķ�ʽ���ʡ�
		if (str)
		{			
			//printf("*str != NULL\n");
			n++;			
			str += strlen(substr);	//str="lllolloef"		str="lloef"			str="ef"
			//printf("str =%p\n",str);
		}		
	}
	return n;
}

//ͳ���ַ����У��Ӵ����ִ��������õı��
int str_times2(char* str, char* substr, int n)
{
	char* p = strstr(str, substr);
	while (p)
	{
		n++;
		p += strlen(substr);
		p = strstr(p, substr);

	}
	return n;
}