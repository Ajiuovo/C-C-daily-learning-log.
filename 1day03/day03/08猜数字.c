#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main08(void)
{
	srand(time(NULL));
	int num;
	int boom = rand()%20;
	do {
		printf("��������Ҫ�µ����֣�\n");
		scanf("%d", &num);
		if (num == boom) {
			printf("ը����ը\n");
			break;
		}
		else if(num<boom)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�´���\n");
		}

		
	} while (1);   //����ȥ��break��������Ϊwhile (num != boom);
	printf("�Ѳ���");
	return 0;
}