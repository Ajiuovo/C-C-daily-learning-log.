#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int main10(void)
{
	for (int i = 1;i < 10;i++) {
		for (int j = 1;j < i+1;j++) {
			printf("%d * %d = %d", i, j, i * j);
			printf("    ");
		}
		printf("\n");
	}
	return 0;
}