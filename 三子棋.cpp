//1.������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
//��ʼ������
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
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int  col)
{
	int i, j;
	for (i = 0; i < row; i++)//�Ľ��а���ѭ����д
	{
		printf("%c  |%c  |%c  \n",board[i][0],board[i][1],board[i][2]);
		if (i<row-1)
		printf("---|---|---\n");
	//int i, j;
	//for (i = 0; i < row; i++)//�Ľ��а���ѭ����д
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
//�������
void PlayMove(char board[ROW][COL], int row, int col)

{
	printf("�������->\n");
	while (1){
		printf("����������->");
		int x = 0, y = 0;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				
				printf("���걻ռ�ã����������룡\n");
			}
			else
			{
			
				board[x - 1][y - 1] = '*';
			break;
			}
		}
		else
			printf("���������������룡\n");
	}
}
//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������->\n");
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
//�ж������Ƿ�����
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
	return 1;//����
}
//�ж��Ƿ�������Ƿ�Ӯ��
//���Ӯ - "*"
//����Ӯ - "#"
//ƽ�� - "Q"
//���� - "C"
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
//��ӡ��Ϸ����
void menu()
{
	printf("*******************************************************\n");
	printf("****************��������Ϸ*****************************\n");
	printf("****************1.��ʼ��Ϸ*****************************\n");
	printf("****************0.�˳���Ϸ*****************************\n");
	printf("*******************************************************\n");
}
//����Ϸ�������
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
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
}
int main()

{
	int a;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &a);
		switch (a)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("ѡ��������ٴ�ѡ��\n");
			break;
		}
	} while (a);
	system("pause");
	return 0;
}