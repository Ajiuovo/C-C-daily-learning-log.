#define _CRT_SECURE_NO_WARNINGS
#include "snack.h"

int main(void)
{

	//去除光标 
	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = FALSE;
	cci.dwSize = sizeof(cci);
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);


	srand(time(NULL));		//播种随机种子。
	//初始化蛇和食物：得放在main函数中，放在UI_init中会影响之后的刷新页面
	snack_init();
	Food_init();
	Wall_init();
	UI_init();
	play_Game();
	/*for (size_t i = 0; i < 20; i++)
	{
		for (size_t i = 0; i < 60; i++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//打印分数
	score_Show();

	return EXIT_SUCCESS;
}

//初始化蛇
void snack_init()
{
	snack.size = 2;
	snack.body[0].x = WIDE / 2;			//初始化蛇头
	snack.body[0].y = HIGH / 2;
	snack.body[1].x = WIDE / 2 - 1;		//初始化一节蛇身
	snack.body[1].y = HIGH / 2;
	return;
}
//初始化食物
void Food_init()
{
	food.x = rand() % WIDE;		//0-59
	food.y = rand() % HIGH;		//0-20
	return;
}
//UI界面初始化
void UI_init()
{	
	COORD coord;
	//画蛇
	for (size_t i = 0; i < snack.size; i++)
	{
		//控制游标位置SetConsoleCursorPosition();		
		coord.X = snack.body[i].x;
		coord.Y = snack.body[i].y;
		//printf("%d %d", coord.X, coord.Y);		//调试代码
		//将光标移动到初始化的蛇头位置
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if (i==0)
		{			
			putchar('@');
		}
		else
		{
			putchar('*');
		}
	}
	//调试代码
	/*coord.X = 0;
	coord.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);*/

	//画食物
	coord.X = food.x;
	coord.Y = food.y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');

	//将光标位置移动至游戏框外，避免程序结束的提示语影响游戏画面
	/*coord.X = 0;
	coord.Y = HIGH+2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);*/

	//去除蛇尾
	coord.X = lastX;
	coord.Y = lastY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');
}
//画墙
void Wall_init()
{
	for (size_t i = 0; i <= HIGH; i++)
	{
		for (size_t j = 0; j <= WIDE; j++)
		{
			if (j == WIDE)
			{
				printf("|");
			}
			else if(i== HIGH)
			{
				printf("-");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

//蛇的移动控制
/*
* W (0，-1)
* S（0，+1）
* A（-1，0）
* D（+1，0）
* 不回显方式接受键盘输入：getch(); /_getch(); 
* 用法 char ch=getch();
* --------------------------------------
* 不阻塞等待输入：kbhit();/_kbhit();
* 用法 if(kbhit()){  ...}
*/
//判断是否有碰撞，有碰撞或越界则返回ture
BOOL ifTrash()
{
	COORD coord2;
	//撞墙判断
	if (snack.body[0].x < 0 || snack.body[0].x > WIDE || snack.body[0].y < 0|| snack.body[0].y > HIGH)
	{		
		/*coord2.X = 0;
		coord2.Y = HIGH+2;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord2);
		printf("---------撞墙啦1--------");*/		//测试代码
		//终止游戏
		return TRUE;
	}
	//蛇身碰撞判断
	for (size_t i = 1; i < snack.size; i++)
	{
		if (snack.body[0].x == snack.body[i].x && snack.body[0].y == snack.body[i].y)
		{
			/*coord2.X = 0;
			coord2.Y = HIGH + 2;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord2);
			printf("---------撞自己啦2--------");*/			//测试代码
			//终止游戏
			return TRUE;
		}
	}
	return FALSE;		//默认返回值TRUE
	//printf("---------没撞墙--------");		//测试代码
}
void play_Game()
{
	char key = 'd';
	//int j = 0;			//测试代码
	while(1)
	{
		//printf("---------------------------%d--------------------------", j++);		//测试代码
		if (ifTrash())
		{
			//结束游戏
			return;
		}
		// 如果没撞墙就循环游戏
		// 更新画面
		UI_init();		
		// 接受用户输入wasd
		if (_kbhit())
		{
			//蛇移动
			key = _getch();
		}
		switch (key)
		{
		case 'w':kx = 0;ky = -1;break;
		case 's':kx = 0;ky = +1;break;
		case 'a':kx = -1;ky = 0;break;
		case 'd':kx = +1;ky = 0;break;
		default:break;
		}
		//取出蛇尾坐标
		lastX = snack.body[snack.size-1].x;
		lastY = snack.body[snack.size-1].y;
		//依次向前更新蛇，因为会判断是否吃掉了食物，吃掉食物的话size+1，也就是会多一个body出来，并且移动后长在未移动时的尾巴处。
		for (size_t i = snack.size-1; i>0; i--)
		{
			snack.body[i].x = snack.body[i-1].x;
			snack.body[i].y = snack.body[i-1].y;
		}
		snack.body[0].x += kx;
		snack.body[0].y += ky;
		//吃掉食物
		if (snack.body[0].x == food.x && snack.body[0].y == food.y)
		{
			//身体增长
			snack.size++;
			//加分
			Score++;
			//食物消失又产生
			Food_init();
			//加速
			sleepSecond -= 20;
		}
		//system("cls");		一直清屏，屏幕闪烁，游戏体验差。因此选择换一种方式去除蛇尾
		Sleep(sleepSecond);

	}
	return;
}
void score_Show() {
	COORD coord;
	coord.X = 0;
	coord.Y = HIGH+2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	printf("Game Over!");
	printf("		SCORE=%d\n", Score);
}