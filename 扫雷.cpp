#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> 
#include<time.h>
//���Ӵ���ɶ��ԣ�ά����
#define ROW 9
#define COL 9
#define COUNT 9
//��ʼ��
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
	//2.mie_map��ʼ��
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			mine_map[i][j] = '*';
		}
	}
	//3.�������
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
	//1.�ȴ�ӡ��һ�У����꣩
	printf(" |");
	for (int col = 0; col < COL; col++)
	{
		printf("%d ", col);
	}
	printf("\n");
	//2.��ӡһ�зָ���
	for (int col = 0; col < COL; col++)
	{
		printf("---");

	}
	printf("\n");
	//3.����ÿ�����ֱ��ӡ
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
	//���ж��Ƿ�<0
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
	//2.����������λ����
	char show_map[ROW][COL];
	char mine_map[ROW][COL];//��ʼ��
	Init(show_map, mine_map);
	int break_count = 0;
	while (1)
	{
		//3.��ӡ��ͼ
		system("cls");
	/*	PrintMap(mine_map);
		printf("\n\n");*/
		PrintMap(show_map);
		//4.�û��������겢����У��
		printf("������һ������(row col):\n");
		int row = 0;
		int col = 0;
		scanf("%d%d", &row, &col);
		if (row < 0 || row >= ROW
			|| col < 0 || col >= COL)
		{
			printf("��������Խ�磬���������룡\n");
			continue;
		}
		if (show_map[row][col]!='*')
		{
			printf("����������걻ռ�����������룡\n");
			continue;
		}
		//5.�ж��Ƿ����
		if (mine_map[row][col] == '1')
		{
			/*system("cls");*/
			/*PrintMap(mine_map);*/
			printf("������� Game Over!\n");
			break;
		}
		//6.�ж��Ƿ�Ӯ
		break_count++;
		if (break_count == ROW*COL - COUNT)
		{
			printf("��ϲ�㣬��Ϸʤ����\n");
			break;
		}
		//7.��Χ������
		Updatashowmap(show_map, mine_map, row,col);
	}
}
int Menu()
{
	printf("=====================================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("=====================================\n"); 
	printf("���������ѡ��\n"); 
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
			printf("���������������\n");
		}
	}
	system("pause");
	return 0;
}