#define PI 3.1415
#include <stdio.h>
int main01(void)
{
	int r = 3;
	float l = 2 * PI * r;
	float s = PI * r * r;
	printf("%f\n", s);
	printf("%f\n", l);

	printf("%.2f\n", s);
	printf("%.2f\n", l);  //保留两位小数点
	return 0;

}