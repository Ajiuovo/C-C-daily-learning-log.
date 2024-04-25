#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main05(void)
{
	//char src[] = "helloworld!";
	char *src = "helloworld!";
	char dest[20] = "!!";
	char dest2[20] = "!!";			//要保证dest空间足够大
	char *p = strcat(dest, src);
	char * p2 = strncat(dest2, src,3);
	printf("%s\n", p);
	printf("%s\n", dest);
	printf("%s\n", p2);
	printf("%s\n", dest2);
	return EXIT_SUCCESS;
}