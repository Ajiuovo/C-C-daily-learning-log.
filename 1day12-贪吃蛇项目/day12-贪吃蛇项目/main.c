#define _CRT_SECURE_NO_WARNINGS
#include "snack.h"

int main(void)
{

	//ȥ����� 
	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = FALSE;
	cci.dwSize = sizeof(cci);
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);


	srand(time(NULL));		//����������ӡ�
	//��ʼ���ߺ�ʳ��÷���main�����У�����UI_init�л�Ӱ��֮���ˢ��ҳ��
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

	//��ӡ����
	score_Show();

	return EXIT_SUCCESS;
}

//��ʼ����
void snack_init()
{
	snack.size = 2;
	snack.body[0].x = WIDE / 2;			//��ʼ����ͷ
	snack.body[0].y = HIGH / 2;
	snack.body[1].x = WIDE / 2 - 1;		//��ʼ��һ������
	snack.body[1].y = HIGH / 2;
	return;
}
//��ʼ��ʳ��
void Food_init()
{
	food.x = rand() % WIDE;		//0-59
	food.y = rand() % HIGH;		//0-20
	return;
}
//UI�����ʼ��
void UI_init()
{	
	COORD coord;
	//����
	for (size_t i = 0; i < snack.size; i++)
	{
		//�����α�λ��SetConsoleCursorPosition();		
		coord.X = snack.body[i].x;
		coord.Y = snack.body[i].y;
		//printf("%d %d", coord.X, coord.Y);		//���Դ���
		//������ƶ�����ʼ������ͷλ��
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
	//���Դ���
	/*coord.X = 0;
	coord.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);*/

	//��ʳ��
	coord.X = food.x;
	coord.Y = food.y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');

	//�����λ���ƶ�����Ϸ���⣬��������������ʾ��Ӱ����Ϸ����
	/*coord.X = 0;
	coord.Y = HIGH+2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);*/

	//ȥ����β
	coord.X = lastX;
	coord.Y = lastY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');
}
//��ǽ
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

//�ߵ��ƶ�����
/*
* W (0��-1)
* S��0��+1��
* A��-1��0��
* D��+1��0��
* �����Է�ʽ���ܼ������룺getch(); /_getch(); 
* �÷� char ch=getch();
* --------------------------------------
* �������ȴ����룺kbhit();/_kbhit();
* �÷� if(kbhit()){  ...}
*/
//�ж��Ƿ�����ײ������ײ��Խ���򷵻�ture
BOOL ifTrash()
{
	COORD coord2;
	//ײǽ�ж�
	if (snack.body[0].x < 0 || snack.body[0].x > WIDE || snack.body[0].y < 0|| snack.body[0].y > HIGH)
	{		
		/*coord2.X = 0;
		coord2.Y = HIGH+2;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord2);
		printf("---------ײǽ��1--------");*/		//���Դ���
		//��ֹ��Ϸ
		return TRUE;
	}
	//������ײ�ж�
	for (size_t i = 1; i < snack.size; i++)
	{
		if (snack.body[0].x == snack.body[i].x && snack.body[0].y == snack.body[i].y)
		{
			/*coord2.X = 0;
			coord2.Y = HIGH + 2;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord2);
			printf("---------ײ�Լ���2--------");*/			//���Դ���
			//��ֹ��Ϸ
			return TRUE;
		}
	}
	return FALSE;		//Ĭ�Ϸ���ֵTRUE
	//printf("---------ûײǽ--------");		//���Դ���
}
void play_Game()
{
	char key = 'd';
	//int j = 0;			//���Դ���
	while(1)
	{
		//printf("---------------------------%d--------------------------", j++);		//���Դ���
		if (ifTrash())
		{
			//������Ϸ
			return;
		}
		// ���ûײǽ��ѭ����Ϸ
		// ���»���
		UI_init();		
		// �����û�����wasd
		if (_kbhit())
		{
			//���ƶ�
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
		//ȡ����β����
		lastX = snack.body[snack.size-1].x;
		lastY = snack.body[snack.size-1].y;
		//������ǰ�����ߣ���Ϊ���ж��Ƿ�Ե���ʳ��Ե�ʳ��Ļ�size+1��Ҳ���ǻ��һ��body�����������ƶ�����δ�ƶ�ʱ��β�ʹ���
		for (size_t i = snack.size-1; i>0; i--)
		{
			snack.body[i].x = snack.body[i-1].x;
			snack.body[i].y = snack.body[i-1].y;
		}
		snack.body[0].x += kx;
		snack.body[0].y += ky;
		//�Ե�ʳ��
		if (snack.body[0].x == food.x && snack.body[0].y == food.y)
		{
			//��������
			snack.size++;
			//�ӷ�
			Score++;
			//ʳ����ʧ�ֲ���
			Food_init();
			//����
			sleepSecond -= 20;
		}
		//system("cls");		һֱ��������Ļ��˸����Ϸ�������ѡ��һ�ַ�ʽȥ����β
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