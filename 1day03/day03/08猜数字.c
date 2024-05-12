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
		printf("请输入你要猜的数字：\n");
		scanf("%d", &num);
		if (num == boom) {
			printf("炸弹爆炸\n");
			break;
		}
		else if(num<boom)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜大了\n");
		}

		
	} while (1);   //或者去掉break，改条件为while (num != boom);
	printf("已猜中");
	return 0;
}