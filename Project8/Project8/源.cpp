//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char pwd[100] = "bit";
//	char input[100] = { 0 };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		scanf_s("%s", input);
//		if (!strcmp( pwd,input))
//		{
//			printf("登录成功");
//			system("pause");
//		return 0;
//		}
//		printf("登录错误，重新输入");
//	}
//	printf("登录失败");
//	system("pause");
//	return 0;
//}
//int halfsearchArray(int arr[], int size, int f)
//{
//	//int i;
//	int left = 0;
//	int right = size - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > f)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < f)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
	/*for (i = 0; i < size; i++)
	{
		if (arr[i] == f)
		{
			return i;
		}
	}*/
//}
//int main()
//{
//	int a[10] = { 1, 3, 5, 7, 9, 12, 14, 16, 18, 19 };
//	printf("%d\n", halfsearchArray(a, 10, 12));
//system("pause");
//return 0;
//		}
//1.
//#include <stdio.h>i
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//
//	srand((unsigned int)time(NULL));
//	int r = rand() % 100;
//	int n = -1;
//	while (n!=r)
//	{
//		while (!scanf_s("%d", &n))
//		getchar();
//		if (n > r)
//			printf("猜大了\n");
//		else if (n < r)
//			printf("猜小了\n");
//		else
//			printf("猜对了\n");
//	}
//	system("pause");
//
//	return 0;
//}

//1.
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i,j;
//	for (j = 1; j <= 10; j++)
//	{
//		for (i = 1; i <=j; i++)
//			printf("*");
//	printf("\n");
//	}
//	for (j = 9; j >= 1; j--)
//	{
//		for (i = 1; i<=j; i++)
//			printf("*");
//	printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//2.
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i;
//	for (i = 100; i <= 999; i++)
//	{
//		if ((i % 10)*(i % 10)*(i % 10) + ((i / 10) % 10)*((i / 10) % 10) *((i / 10) % 10) + (i / 100)*(i / 100)*(i / 100) == i)
//				printf("%5d", i);
//	}
//	system("pause");
//	return 0;
//}
//3.
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int sn, a, i,b;
//	scanf_s("%d", &a);
//	sn = a,b=a;
//	for (i = 1; i <5; i++)
//	{
//		a = (a * 10) + b;
//		sn += a;
//	}
//	printf("%d", sn);
//	system("pause");
//	return 0;
//}
