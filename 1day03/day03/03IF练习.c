#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main03(void) {
	int pig1, pig2, pig3;
	printf("��������ֻС������أ�");
	scanf("%d %d %d", &pig1, &pig2, &pig3);
	if (pig1 > pig2) {
		if (pig1 > pig3)
		{
			printf("��һֻС�����أ�����Ϊ��%d", pig1);
		}
		else
		{
			printf("����ֻС�����أ�����Ϊ��%d", pig3);
		}
	}
	else {
		if (pig2 > pig3)
		{
			printf("�ڶ�ֻС�����أ�����Ϊ��%d", pig2);
		}
		else
		{
			printf("����ֻС�����أ�����Ϊ��%d", pig3);
		}
	}
	return 0;
}