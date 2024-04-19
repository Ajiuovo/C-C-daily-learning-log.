#include <stdio.h>
int main(void)
{
	int a = 3;
	int b = 5;
	int c1, c2;
	//普通c语言实现
	c1 = a + b;
	printf("%d\n", c1);
	printf("%d\n", a + b);
	printf("%d + %d = &d\n", a, b, a + b);
	//汇编语言实现
	__asm{
		 mov a,3
		 mov b,4
		 mov eax,a
		 add eax,b
		 mov c2,eax 
	}
	printf("%d\n",c2);
	return 0;
}