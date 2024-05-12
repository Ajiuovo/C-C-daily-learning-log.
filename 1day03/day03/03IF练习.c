#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main03(void) {
	int pig1, pig2, pig3;
	printf("请输入三只小猪的体重：");
	scanf("%d %d %d", &pig1, &pig2, &pig3);
	if (pig1 > pig2) {
		if (pig1 > pig3)
		{
			printf("第一只小猪最重，体重为：%d", pig1);
		}
		else
		{
			printf("第三只小猪最重，体重为：%d", pig3);
		}
	}
	else {
		if (pig2 > pig3)
		{
			printf("第二只小猪最重，体重为：%d", pig2);
		}
		else
		{
			printf("第三只小猪最重，体重为：%d", pig3);
		}
	}
	return 0;
}