#ifndef __SNACK_H_
#define __SNACK_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#define WIDE 60
#define HIGH 20
//������ͷ�������
struct Body
{
	int x;
	int y;
};
struct Snack
{
	struct Body body[HIGH * WIDE];
	int size;
}snack;
//����ʳ�����
struct Food
{
	int x;
	int y;
}food;				//ȫ��ֻ��һ��ʳ���һ���ߣ����Ծ�ֱ�Ӷ���һ���ṹ��������ɡ�
int Score = 0;
int kx = 0, ky = 0;

int sleepSecond = 200;
int lastX=0;
int lastY=0;

//��������
void snack_init();
void Food_init();
void UI_init();
BOOL ifTrash();
void play_Game();
void Wall_init();
void score_Show();
#endif // !__SNACK_H_
