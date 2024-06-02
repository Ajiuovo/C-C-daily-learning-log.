#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef struct Student
{
	char* name;
	int age;
}stu;
typedef struct Teacher
{
	char* name;
	char** stu;
}tec;
typedef struct Teacher2
{
	char* name;
	stu** st;
}tec2;
void allocateSpace(tec *** t,int length)
{
	if (t == NULL)
	{
		return;
	}
	tec** temp = malloc(sizeof(tec*) * 3);
	for (size_t i = 0; i < length; i++)
	{
		temp[i] = malloc(sizeof(tec));
		temp[i]->name = malloc(sizeof(char) * 64);
		sprintf(temp[i]->name, "tec_%d", i + 1);
		temp[i]->stu = malloc(sizeof(char *) * 4);
		for (size_t j = 0; j < 4; j++)
		{
			temp[i]->stu[j] = malloc(sizeof(char) * 64);
			sprintf(temp[i]->stu[j], "%s_stu_%d", temp[i]->name, j + 1);
		}
	}
	*t = temp;
}
tec2** allocateSpace2(int length)
{
	tec2** temp = malloc(sizeof(tec*) * 3);
	for (size_t i = 0; i < length; i++)
	{
		temp[i] = malloc(sizeof(tec));
		temp[i]->name = malloc(sizeof(char) * 64);
		sprintf(temp[i]->name, "tec_%d", i + 1);
		temp[i]->st = malloc(sizeof(stu*) * 4);
		for (size_t j = 0; j < 4; j++)
		{
			temp[i]->st[j] = malloc(sizeof(stu));
			temp[i]->st[j]->name = malloc(sizeof(char) * 64);
			sprintf(temp[i]->st[j]->name, "%s_stu_%d", temp[i]->name, j + 1);
			temp[i]->st[j]->age = j + 18;
		}
	}
	return temp;
}
void showT(tec** t, int length)
{
	for (size_t i = 0; i < length; i++)
	{
		printf("%s ", t[i]->name);
		for (size_t j = 0; j < 4; j++)
		{
			printf("%s ", t[i]->stu[j]);
		}
		printf("\n");
	}
}
void showT2(tec2** t, int length)
{
	for (size_t i = 0; i < length; i++)
	{
		printf("%s ", t[i]->name);
		for (size_t j = 0; j < 4; j++)
		{
			printf("%s %d; ", t[i]->st[j]->name, t[i]->st[j]->age);
		}
		printf("\n");
	}
}
void freeT(tec** t, int length)
{
	if (t == NULL)
	{
		return;
	}
	if (length < 0)
	{
		return;
	}
	for (size_t i = 0; i < length; i++)
	{
		if (t[i]->name != NULL)
		{
			free(t[i]->name);
			t[i]->name = NULL;
		}
		for (size_t j = 0; j < 4; j++)
		{
			if (t[i]->stu[j] != NULL)
			{
				free(t[i]->stu[j]);
				t[i]->stu[j] = NULL;
			}
		}
		if (t[i]->stu != NULL)
		{
			free(t[i]->stu);
			t[i]->stu = NULL;
		}
		free(t[i]);
		t[i] = NULL;
	}
	free(t);
	t = NULL;
}
void freeT2(tec2** t, int length)
{
	if (t == NULL)
	{
		return;
	}
	if (length < 0)
	{
		return;
	}
	for (size_t i = 0; i < length; i++)
	{
		if (t[i]->name != NULL)
		{
			free(t[i]->name);
			t[i]->name = NULL;
		}
		for (size_t j = 0; j < 4; j++)
		{
			if (t[i]->st[j]->name != NULL)
			{
				free(t[i]->st[j]->name);
				t[i]->st[j]->name = NULL;
			}
			if (t[i]->st[j] != NULL)
			{
				free(t[i]->st[j]);
				t[i]->st[j] = NULL;
			}
		}
		if (t[i]->st != NULL)
		{
			free(t[i]->st);
			t[i]->st = NULL;
		}
		free(t[i]);
		t[i] = NULL;
	}
	free(t);
	t = NULL;
}

void test01()
{
	tec** t;
	int len = 3;
	allocateSpace(&t,len);
	//打印数组
	showT(t,len);
	freeT(t, len);
	t = NULL;
}
void test02()
{
	tec2** t;
	int len = 3;
	t = allocateSpace2(len);
	//打印数组
	showT2(t, len);
	freeT2(t, len);
	t = NULL;
}
int main(void)
{
	test01();
	//test02();
	return EXIT_SUCCESS;
}