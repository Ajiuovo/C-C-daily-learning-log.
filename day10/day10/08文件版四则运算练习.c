#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void write_file08()
{
	FILE* fp = fopen("test08.txt", "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return -1;
	}
	fputs("10+2=\n", fp);
	fputs("10*2=\n", fp);
	fputs("10-2=\n", fp);
	fputs("10/2=\n", fp);
	fclose(fp);
}
int calc(char c, int a, int b)
{
	switch (c)
	{
	case '/':
		return a / b;
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	default:
		break;
	}
}
void read_file08()
{
	char* filename = "test08.txt";
	FILE* fp = fopen(filename, "r");
	char tmp[4096] = { 0 };
	char result[4096] = { 0 };
	char fi_res[4096] = { 0 };
	int a, b;
	char c;
	if (fp == NULL)
	{
		perror("fopen error");
		return -1;
	}
	while (1)
	{		
		fgets(tmp, 4096, fp);
		if (feof(fp))
		{
			break;
		}
		sscanf(tmp, "%d%c%d=\n", &a, &c, &b);
		/*switch (c)
		{
		case '/':
			ret = a / b;
			break;
		case '+':
			ret = a + b;
			break;
		case '-':
			ret = a - b;
			break;
		case '*':
			ret = a * b;
			break;
		default:
			break;
		}*/
		printf("%s\n", result);		//�����
		sprintf(result,"%d%c%d=%d\n",a,c,b,calc(c,a,b));			//�����д��result
		strcat(fi_res,result);		//ƴ������result
		//Q:�ܲ�����д��ʱֱ�Ӹ���ǰһ��result�� A����֪����
	}
	fclose(fp);			//�ر�ֻ�б��ʽ���ļ�
	FILE* fp2 = fopen(filename, "w");		//д�����ս��
	fputs(fi_res, fp2);
	fclose(fp2);
}
int main(void)
{
	write_file08();
	getchar();		//������ͣ���Ѳ鿴ǰ������
	read_file08();
	return EXIT_SUCCESS;
}