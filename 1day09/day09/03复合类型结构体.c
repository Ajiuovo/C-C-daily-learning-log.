#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//����ṹ��
struct students
{
	//��Ա�б�
	char name[20];
	size_t age;
	char tel[16];
	float score[3];
	char sex;
};
//}stu = { "����",200,"13846421564",100.0f,200,300,'M' };	//�ܵ����ָ�ֵ��ʽ��ֱ�Ӹ��ڽṹ�嶨���,�˴����Զ������
//}stu1, stu2, stu3;
	
int main03(void)
{
	//�ٰ��սṹ��˳��ֵ
	//struct students stu = { "����",200,"13846421564",100.0f,200,300,'M'};
	
	//�ڲ����սṹ��˳��ֵ
	//struct students stu = { .sex = 'F',.age = 12,.name = "����",.tel = "1368548463413",.score[0] = 100,.score[1] = 99,.score[2] = 98 };
	
	//�۵����ָ�ֵ��ʽ����Ҫָ����//���ṹ������ָ���Ա��������ʼ��
	struct students stu;
	//stu.name = "л����";				//�Ҳ�Ϊһ�ַ������������޸ģ�������������ֵ
	strcpy(stu.name, "л����");
	stu.age = 59;
	stu.score[0] = 90;
	stu.score[1] = 40;
	stu.score[2] = 20;
	stu.sex = 'F';
	strcpy(stu.tel, "156433656396");
	

	printf("����:%s\n", stu.name);			//.Ҳ��һ����������ӳ�Ա�б���ѡȡ��stu��һ���׵�ַ
	printf("����:%d\n", stu.age);
	printf("�绰:%s\n", stu.tel);
	printf("�ɼ�:%.1f %.1f %.1f\n", stu.score[0], stu.score[1], stu.score[2]);
	printf("�Ա�:%s\n", stu.sex=='M' ? "��" : "Ů");
	return EXIT_SUCCESS;
}