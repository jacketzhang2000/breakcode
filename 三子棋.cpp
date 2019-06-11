//1.三子棋
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{

	int i, j;
	for (i = 0; i <row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int  col)
{
	int i, j;
	for (i = 0; i < row; i++)//改进列按照循环来写
	{
		printf("%c  |%c  |%c  \n",board[i][0],board[i][1],board[i][2]);
		if (i<row-1)
		printf("---|---|---\n");
	//int i, j;
	//for (i = 0; i < row; i++)//改进列按照循环来写
	//{
	//	for (j = 0; j < col; j++)
	//	{
	//		printf(" %c ", board[i][j]);
	//		if (j < col - 1)
	//			printf("|");
	//	}
	//	printf("\n");
	//	if (i < row - 1)
	//	{
	//		for (j = 0; j < col; j++)
	//		{
	//			printf("___");
	//			if (j < col - 1)
	//			{
	//				printf("|");

	//			}

	//		}
	//		printf("\n");
	//	}
	}
}
//玩家走棋
void PlayMove(char board[ROW][COL], int row, int col)

{
	printf("玩家下棋->\n");
	while (1){
		printf("请输入坐标->");
		int x = 0, y = 0;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				
				printf("坐标被占用，请重新输入！\n");
			}
			else
			{
			
				board[x - 1][y - 1] = '*';
			break;
			}
		}
		else
			printf("坐标有误，重新输入！\n");
	}
}
//电脑走棋
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
//判断棋盘是否满了
int IsFull(char board[ROW][COL], int row, int  col)
{
	int i=0;
	int j=0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0; 
		}
	}
	return 1;//满了
}
//判断是否继续或是否赢棋
//玩家赢 - "*"
//电脑赢 - "#"
//平局 - "Q"
//继续 - "C"
char Checkwin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for  (i = 0; i < row; i++){
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
		return board[1][1];
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	return 'C';
}
//打印游戏界面
void menu()
{
	printf("*******************************************************\n");
	printf("****************三子棋游戏*****************************\n");
	printf("****************1.开始游戏*****************************\n");
	printf("****************0.退出游戏*****************************\n");
	printf("*******************************************************\n");
}
//玩游戏函数组合
void  game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else if (ret == 'Q')
		printf("平局\n");
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
	} while (a);
	system("pause");
	return 0;
}