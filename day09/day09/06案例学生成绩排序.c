#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct score
{
	//��Ա�б�
	char name[20];
	float score[3];
};
int main06(void)
{
	struct score s[3];
	for (size_t i = 0; i < 3; i++)
	{
		printf("����������  �ɼ���\n");
		scanf("%s%f%f%f", s[i].name, &s[i].score[0], &s[i].score[1], &s[i].score[2]);
	}
	for (size_t i = 0; i < 3; i++)
	{		
		printf("����:%s\n�ɼ���%.1f %.1f %.1f\n", s[i].name,s[i].score[0],s[i].score[1],s[i].score[2]);
	}
	//���ݳɼ��ܷ�����
	for (size_t i = 0; i < 3-1; i++)
	{
		for (size_t j = 0; j < 3-i-1; j++)
		{
			int s1 = s[j].score[0] + s[j].score[1] + s[j].score[2];
			int s2 = s[j + 1].score[0] + s[j + 1].score[1] + s[j + 1].score[2];
			//������ ���������Ա
			/*if (s1 > s2)
			{
				//�ṹ�彻�����������г�Ա�б��е�����
				//��������
				char tmp[20] = { 0 };
				strcpy(tmp, s[j].name);
				strcpy(s[j].name, s[j + 1].name);
				strcpy(s[j + 1].name, tmp);
				//�����ɼ�
				for (size_t k = 0; k < 3; k++)
				{
					float ttmp = s[j].score[k];
					s[j].score[k] = s[j + 1].score[k];
					s[j + 1].score[k]=ttmp;
				}
			}*/
			//������ �����ṹ�����------>�Ż�
			if (s1 > s2)
			{
				struct score tmp = s[j];
				s[j] = s[j+1];
				s[j + 1] = tmp;
			}
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		printf("����:%s\n�ɼ���%.1f %.1f %.1f\n", s[i].name, s[i].score[0], s[i].score[1], s[i].score[2]);
	}
	return EXIT_SUCCESS;
}