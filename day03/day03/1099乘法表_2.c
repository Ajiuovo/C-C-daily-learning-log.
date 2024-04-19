#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int main102(void) {
	for (int i = 9;i >0;i--) {
		for (int j = 1;j < i+1;j++) {
			printf("%d * %d = %d", j, i, i * j);
			printf("    ");
		}
		printf("\n");
	}
	return 0;
}