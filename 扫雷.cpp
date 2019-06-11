#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> 
#include<time.h>
//增加代码可读性，维护性
#define ROW 9
#define COL 9
#define COUNT 9
//初始化
void Init(char show_map[ROW][COL], char mine_map[ROW][COL])
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			show_map[i][j] = '*';
		}
	}
	//2.mie_map初始化
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			mine_map[i][j] = '*';
		}
	}
	//3.随机埋雷
	int count = COUNT;
	while (count>0)
	{
		int row=rand()%ROW;
		int col = rand() %COL;
		if (mine_map[row][col] == '1')
		{
			continue;
		}
		mine_map[row][col] = '1';  
		--count;
	}
}
void PrintMap(char map[ROW][COL])
{
	//1.先打印第一行（坐标）
	printf(" |");
	for (int col = 0; col < COL; col++)
	{
		printf("%d ", col);
	}
	printf("\n");
	//2.打印一行分隔符
	for (int col = 0; col < COL; col++)
	{
		printf("---");

	}
	printf("\n");
	//3.按照每行来分别打印
	for (int row = 0; row < ROW; row++)
	{
		printf("%d|", row);
		for (int col = 0; col < COL; col++)
		{
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
void Updatashowmap(char show_map[ROW][COL], char mine_map[ROW][COL],int  row, int col)
{
	//先判断是否<0
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0
		&& mine_map[row - 1][col - 1] == '1')
		count++;
	if (row - 1 >= 0
		&& mine_map[row - 1][col] == '1')
		count++;
	if (row - 1 >= 0 && col + 1 <COL
		&& mine_map[row - 1][col +1] == '1')
		count++;
	if ( col - 1 >= 0
		&& mine_map[row ][col - 1] == '1')
		count++;
	if ( col +1 <COL
		&& mine_map[row][col + 1] == '1')
		count++;
	if (row + 1 <ROW && col - 1 >= 0
		&& mine_map[row + 1][col - 1] == '1')
		count++;
	if (row + 1 <ROW 
		&& mine_map[row + 1][col ] == '1')
		count++;
	if (row + 1 <ROW && col +1<COL
		&& mine_map[row + 1][col +1] == '1')
		count++;
	show_map[row][col] = count + '0';
 }
void Game()
{
	//2.创建两个二位数组
	char show_map[ROW][COL];
	char mine_map[ROW][COL];//初始化
	Init(show_map, mine_map);
	int break_count = 0;
	while (1)
	{
		//3.打印地图
		system("cls");
	/*	PrintMap(mine_map);
		printf("\n\n");*/
		PrintMap(show_map);
		//4.用户输入坐标并进行校验
		printf("请输入一组坐标(row col):\n");
		int row = 0;
		int col = 0;
		scanf("%d%d", &row, &col);
		if (row < 0 || row >= ROW
			|| col < 0 || col >= COL)
		{
			printf("您的输入越界，请重新输入！\n");
			continue;
		}
		if (show_map[row][col]!='*')
		{
			printf("您输入的坐标被占，请重新输入！\n");
			continue;
		}
		//5.判定是否踩雷
		if (mine_map[row][col] == '1')
		{
			/*system("cls");*/
			/*PrintMap(mine_map);*/
			printf("你踩雷了 Game Over!\n");
			break;
		}
		//6.判断是否赢
		break_count++;
		if (break_count == ROW*COL - COUNT)
		{
			printf("恭喜你，游戏胜利！\n");
			break;
		}
		//7.周围地雷数
		Updatashowmap(show_map, mine_map, row,col);
	}
}
int Menu()
{
	printf("=====================================\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("=====================================\n"); 
	printf("亲输入你的选择：\n"); 
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main()
{
	srand((unsigned)time(0));
	while (1)
	{
		int choice = Menu();
		if (choice == 1)
		{
			Game();
		}
		else if (choice == 0)
		{
			printf("goodby!\n");
			break;
        }
		else
		{
			printf("您输入的坐标有误！\n");
		}
	}
	system("pause");
	return 0;
}