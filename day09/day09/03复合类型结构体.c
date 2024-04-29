#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//定义结构体
struct students
{
	//成员列表
	char name[20];
	size_t age;
	char tel[16];
	float score[3];
	char sex;
};
//}stu = { "张三",200,"13846421564",100.0f,200,300,'M' };	//④第四种赋值方式：直接跟在结构体定义后,此处可以多个定义
//}stu1, stu2, stu3;
	
int main03(void)
{
	//①按照结构体顺序赋值
	//struct students stu = { "张三",200,"13846421564",100.0f,200,300,'M'};
	
	//②不按照结构体顺序赋值
	//struct students stu = { .sex = 'F',.age = 12,.name = "刘能",.tel = "1368548463413",.score[0] = 100,.score[1] = 99,.score[2] = 98 };
	
	//③第三种赋值方式：需要指出！//若结构体内有指针成员，则必须初始化
	struct students stu;
	//stu.name = "谢广坤";				//右侧为一字符常量，不能修改，不可以这样赋值
	strcpy(stu.name, "谢广坤");
	stu.age = 59;
	stu.score[0] = 90;
	stu.score[1] = 40;
	stu.score[2] = 20;
	stu.sex = 'F';
	strcpy(stu.tel, "156433656396");
	

	printf("姓名:%s\n", stu.name);			//.也是一个运算符，从成员列表中选取，stu是一个首地址
	printf("年龄:%d\n", stu.age);
	printf("电话:%s\n", stu.tel);
	printf("成绩:%.1f %.1f %.1f\n", stu.score[0], stu.score[1], stu.score[2]);
	printf("性别:%s\n", stu.sex=='M' ? "男" : "女");
	return EXIT_SUCCESS;
}