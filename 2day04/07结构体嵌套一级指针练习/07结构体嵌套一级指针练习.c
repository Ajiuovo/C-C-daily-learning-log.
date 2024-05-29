#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef struct MyStruct
{
	char *name;
	int age;

}stu;
stu ** allocateSpace()
{
	stu ** temp = malloc(sizeof(stu*) * 3);
	for (size_t i = 0; i < 3; i++)
	{
		temp[i] = malloc(sizeof(stu));
		temp[i]->name = malloc(sizeof(char) * 64);
		sprintf(temp[i]->name, "name%d", i + 1);
		temp[i]->age = i + 15;
	}
	return temp;
}
void printArray(stu** s,int len)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%s %d\n", s[i]->name, s[i]->age);
	}
}
void freeSpace(stu** s, int len)
{
	if (s == NULL)
	{
		return;
	}
	if (len < 0)
	{
		return;
	}
	for (size_t i = 0; i < len; i++)
	{
		if (s[i]->name != NULL)
		{
			free(s[i]->name);
			s[i]->name = NULL;
		}
		free(s[i]);
		s[i] = NULL;
	}
	free(s);
	s = NULL;
}
void test01()
{
	stu** s1 = allocateSpace();
	printArray(s1,3);
	freeSpace(s1, 3);
	s1 = NULL;
	
}
int main(void)
{
	test01();

	return EXIT_SUCCESS;
}