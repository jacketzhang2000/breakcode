#define _CRT_SECURE_NO_WARNINGS 1
1.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	srand((unsigned int)time(NULL));
	int r = rand() % 100;
	int n = -1;
	while (n!=r)
	{
		while (!scanf_s("%d", &n))
		getchar();
		if (n > r)
			printf("猜大了\n");
		else if (n < r)
			printf("猜小了\n");
		else
			printf("猜对了\n");
	}
	system("pause");

	return 0;
}
2.
#include <stdio.h>
#include <stdlib.h>
int halfsearchArray(int arr[], int size, int f)
{
	//int i;
	int left = 0;
	int right = size - 1;
	int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > f)
		{
			right = mid - 1;
		}
		else if (arr[mid] < f)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
}
int main()
{
	int a[10] = { 1, 3, 5, 7, 9, 12, 14, 16, 18, 19 };
	printf("%d\n", halfsearchArray(a, 10, 12));
system("pause");
return 0;
}
3.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char pwd[100] = "bit";
	char input[100] = { 0 };
	int i;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", input);
		if (!strcmp(pwd, input))
		{
			printf("登录成功");
			system("pause");
			return 0;
		}
		printf("登录错误，重新输入");
	}
	printf("登录失败");
	system("pause");
	return 0;
}
4.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char x;
	int i;
	for (i = 1; i < 12; i++)
	{
		scanf("%c", &x);


		if (x >= 'a'&&x <= 'z')
			printf("%c", x - 32);
		else if (x >= 'A'&&x <= 'Z')
			printf("%c", x + 32);
	}

	system("pause");
	return 0;
}