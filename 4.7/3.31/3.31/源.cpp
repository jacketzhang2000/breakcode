//#define _CRT_SECURE_NO_WARNINGS 1
//1.
//#include <stdio.h>
//#include <stdlib.h>
//void print_biao(int x)
//{
//	int i = 0;//不要越界，不要输入
//	          //函数功能尽量简单
//	int j = 0;
//	for (i = 1; i <= x; i++)
//	{
//
//
//		for (j = 1; j <= i; j++)
//		{
//			printf("%4d*%d=%d", j, i, i*j);//宽度：%2d(两个空格，三位数也可打印） %0d（数<9时补0) %-2d（左对齐） %-6.21f（负宽度、宽度、保留位数）
//		}
//
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print_biao(a);
//	system("pause");
//	return 0;
//}
//2.
//#include <stdio.h>
//#include <stdlib.h>
//void Change(int* x, int* y)
//{
//	int c;
//	c = *x;
//	*x = *y;
//	*y = c;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前a=%d,b=%d\n", a, b);
//	Change(&a, &b);
//	printf("交换后a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//3.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int Panduan(int Year)
//{
//	if (Year % 100 != 0 && Year % 4 == 0 || Year % 400 == 0)
//	{
//		return 1;//驼峰式，首字母大写式
//	}//or return (Year % 100 != 0 && Year % 4 == 0 || Year % 400 == 0);
//}
//int main()
//{
//	int year;
//	scanf("%4d", &year);//%4d 避免scanf越界
//	if (Panduan(year))
//	{
//		printf("%d是闰年\n", year);
//	}
//	else 
//		printf("%d不是闰年\n", year);
//	system("pause");
//	return 0;
//}
//4.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#define N 10
//void Init(int* arr)
//{
//	int i;
//	for (i = 0; i < N; i++)//可选另一个数组初始化
//	{
//		arr[i] = i;
//	}
//	printf("初始化的数组：\n");
//	for (i = 0; i < N; i++)
//		printf("%3d", arr[i]);
//	printf("\n");
//}
//void Empty(int* arr)
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		arr[i] = '\0';
//		
//	}
//	printf("清空后的数组：\n");
//for (i = 0; i < N; i++)
//			printf("%3d", arr[i]);
//printf("\n");
//}
//void Reverse(int* arr)
//{
//	int i,j;
//	int x;
//	for (i = 0,j=N-1; i < N/2,j>=N/2; i++,j--)//i<j
//	{
//		x=arr[i];
//		arr[i] = arr[j];
//		arr[j] = x;
//	}
//	printf("逆置后的数组：\n");
//	for (i = 0; i < N; i++)
//		printf("%3d", arr[i]);
//	printf("\n");
//}
//int main()
//
//{
//	int arr[N] ;
//	Init(arr);
//	Reverse(arr);
//	Empty(arr);
//	system("pause");
//	return 0;
//}
//5.
//#define _CRT_SECURE_NO_WARNINGS 1
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int IS_sushu(int x)
{
	int i = 0;
	for (i = 2; i <=sqrt(x);i++)
	if (x%i == 0)
	{
		return 0;
	}
	    return 1;
}
int main()
{
	int a;
	scanf("%d", &a);
	if (IS_sushu(a))
	{
		printf("%d是素数\n", a);
	}
	else 
		printf("%d不是素数\n", a);
	system("pause");
	return 0;
}