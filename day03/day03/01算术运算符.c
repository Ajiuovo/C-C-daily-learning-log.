#include <stdio.h>

int main01(void)
{
	int a = 3;
	printf("a=%d\n", a++);
	printf("a=%d\n", a);
	
	int b = 3;
	printf("b=%d\n", ++b);
	printf("b=%d\n", b);
	return 0;

}