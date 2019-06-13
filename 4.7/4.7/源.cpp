//1.三子棋
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL] ,int row,int col)
{
	
	int i, j;
	for (i = 0; i <row; i++){
		for (j = 0; j < col; j++)
		{
			board[i][i] = ' ';
		}
	}
	
}
void DisplayBoard(char board[ROW][COL], int row, int  col)
{
	//int i, j;
	//for (i = 0; i < row; i++)//改进列按照循环来写
	//{
	//	printf("%c  |%c  |%c  \n",board[i][0],board[i][1],board[i][2]);
	//	if (i<row-1)
	//	printf("---|---|---\n");
	int i, j;
	for (i = 0; i < row; i++)//改进列按照循环来写
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("___");
				if (j < col - 1)
				{
					printf("|");
				
				}
			
			}
			printf("\n");
		}
	}
}
void PlayMove(char board[ROW][COL], int row, int col)

{
	printf("玩家下棋->\n");
	while (1){
		printf("请输入坐标->");
		int x = 0, y = 0;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
			}
			else
					printf("坐标被占用，请重新输入！\n");
			break;
		}
else
printf("坐标有误，重新输入！\n");
}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋->\n");
		int x = 0, y = 0;
		while (1)
		{
			x = rand() % row;
			y = rand() % col;

			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
		}
			}
	}
void menu()
{
	printf("*******************************************************\n");
	printf("****************三子棋游戏*****************************\n");
	printf("****************1.开始游戏*****************************\n");
	printf("****************2.退出游戏*****************************\n");
	printf("*******************************************************\n");
}
void  game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
    DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	}
}
int main()

{
int a;
srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
			scanf("%d", &a);
			switch (a)
			{
			case 0:
				printf("退出游戏\n");
				break;
			case 1:
				game();
				break;
			default:
				printf("选择错误，请再次选择：\n");
				break;
			}
	} while(a);
	system("pause");
	return 0;
}