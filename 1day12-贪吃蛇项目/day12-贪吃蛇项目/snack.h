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
//定义蛇头蛇身对象
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
//定义食物对象
struct Food
{
	int x;
	int y;
}food;				//全局只有一个食物和一个蛇，所以就直接定义一个结构体变量即可。
int Score = 0;
int kx = 0, ky = 0;

int sleepSecond = 200;
int lastX=0;
int lastY=0;

//声明函数
void snack_init();
void Food_init();
void UI_init();
BOOL ifTrash();
void play_Game();
void Wall_init();
void score_Show();
#endif // !__SNACK_H_
