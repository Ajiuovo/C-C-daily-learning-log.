#include "codeFile.h"


void codeF(char* f1, char* f2)
{
	
	FILE* fi = fopen(f1, "r");
	FILE* fo = fopen(f2, "w");
	if (!fi || !fo)
	{
		return;
	}
	char ch;
	short temp;
	while ((ch = fgetc(fi)) != EOF)
	{
		temp = (short)ch;
		temp = temp << 4;
		temp = (char)temp;
		printf("%c\n", temp);
		fputc(temp, fo);
	}
	fclose(fi);
	fclose(fo);
}

void decodeF(char* f1, char* f2)
{

	FILE* fi = fopen(f1, "r");
	FILE* fo = fopen(f2, "w");
	if (!fi || !fo)
	{
		return;
	}
	char ch;
	short temp;
	while ((ch = fgetc(fi)) != EOF)
	{
		printf("%c\n", ch);
		temp = (short)ch;
		temp = temp << 4;
		printf("%d\n", temp);
		temp = (char)temp;
		fputc(temp, fo);
	}
	fclose(fi);
	fclose(fo);
}
