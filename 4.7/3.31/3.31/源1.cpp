#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define N 10
void Init(int arr[],int input [])
{
	int i;
	for (i = 0; i < N; i++)//可选另一个数组初始化
	{
		arr[i] = input[i];
	}
	printf("初始化的数组：\n");
	for (i = 0; i < N; i++)
		printf("%3d", arr[i]);
	printf("\n");
}
void printflong(int arr[] )
{
	int i = 0;
	for (i = 0; i < N; i ++ )
	{
		printf("%d\n",arr[i]);
		printf("\n");
	}
}
void Empty(int* arr)
{
	int i;
	for (i = 0; i < N; i++)
	{
		arr[i] = '\0';

	}
	printf("清空后的数组：\n");
	for (i = 0; i < N; i++)
		printf("%3d", arr[i]);
	printf("\n");
}
void Reverse(int* arr)
{
	int i, j;
	int x;
	for (i = 0, j = N - 1; i < N / 2, j >= N / 2; i++, j--)
	{
		x = arr[i];
		arr[i] = arr[j];
		arr[j] = x;
	}
	printf("逆置后的数组：\n");
	for (i = 0; i < N; i++)
		printf("%3d", arr[i]);

}
int main()

{
	int data[10] = { 0 };
	int arr[N];
	int input[10] = { 2, 4, 6, 7, 8, 1, 3, 5, 7, 9 };
	Init(arr, input);
	Reverse(arr);
	Empty(arr);
	system("pause");
	return 0;
}
