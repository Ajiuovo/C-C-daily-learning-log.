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
	//�Ա���ȷ���޸Ĵ�1���ж��ļ��򿪳ɹ����
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
	//�Ա���ȷ���޸Ĵ�2����ȡ�ļ���ʽ�����ַ���
	char ch;
	short temp;
	while( (ch=fgetc(fi)) !=EOF)
	{	
		//�Ա���ȷ���޸Ĵ�3�����ַ�����
		temp = (short)ch;
		temp = temp << 4;		//��ԭ�ַ�������λ
		temp = temp | 0x8000;  //�����������Ϊ����
		temp += rand() % 16;     //�ں���λ��һ�������
		//printf("%d\n", temp);
		/*fputc(temp, fo);*/
		//�Ա���ȷ���޸Ĵ�4�����ܺ���������
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
		//���ܣ����ȰѸ�λ�ĸ���ȥ��  ����һλ������������λȥ�������
		temp = temp << 1;
		temp = temp >> 5;
		//printf("%d\n", temp);
		temp = (char)temp;
		fputc(temp, fo);
	}
	fclose(fi);
	fclose(fo);
}
