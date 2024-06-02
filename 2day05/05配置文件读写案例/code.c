#include "code.h"


void code(char* f1, char* f2)
{
	/*FILE* fi = fopen(f1, "rb");
	if (!fi)
	{
		return;
	}
	FILE* fo = fopen(f2, "wb");
	if (!fo)
	{
		return;
	}*/
	//对比正确答案修改处1：判断文件打开成功与否
	FILE* fi = fopen(f1, "r");
	FILE* fo = fopen(f2, "w");
	if (!fi|| !fo)
	{
		return;
	}
	
	/*char buf[64] = { 0 };
	while (feof(fi))
	{
		fgets(buf, 64, fi);
		for (size_t i = 0; i < strlen(buf); i++)
		{
			buf[i] << 4;
		}
		fputs(buf, fo);
	}*/
	//对比正确答案修改处2：读取文件方式，按字符读
	char ch;
	short temp;
	while( (ch=fgetc(fi)) !=EOF)
	{	
		//对比正确答案修改处3：按字符加密
		temp = (short)ch;
		temp = temp << 4;		//将原字符左移四位
		temp = temp | 0x8000;  //异或将所有数变为负数
		temp += rand() % 16;     //在后四位加一个随机数
		//printf("%d\n", temp);
		/*fputc(temp, fo);*/
		//对比正确答案修改处4：加密后的内容输出
		fprintf(fo, "%hd", temp);
		
	}
	fclose(fi);
	fclose(fo);
}

void decode(char* f1, char* f2)
{

	FILE* fi = fopen(f1, "r");
	FILE* fo = fopen(f2, "w");
	if (!fi || !fo)
	{
		return;
	}
	char ch;
	short temp;
	while (!feof(fi))
	{
		fscanf(fi, "%hd", &temp);
		//解密：首先把高位的负号去掉  左移一位，而后右移五位去掉随机数
		temp = temp << 1;
		temp = temp >> 5;
		//printf("%d\n", temp);
		temp = (char)temp;
		fputc(temp, fo);
	}
	fclose(fi);
	fclose(fo);
}
