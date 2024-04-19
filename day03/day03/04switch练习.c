#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main04(void)
{
	int score;
	scanf("%d", &score);
	switch (score/10)
	{
	case 10:
		printf("ux");
		break;
	case 9:
		printf("ux");
		break;
	case 8:		
	case 7:
		printf("lh");
		break;
	case 6:
		printf("jg");
		break;
	default:
		printf("X!");
		break;
	}
	return 0;
}