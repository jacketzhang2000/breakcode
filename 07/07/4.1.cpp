//1.递归
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int Fib(int N)
//{
//	if (N< 3)
//	{
//		return 1;
//	}//递归适用于:循环层数不确定
//	else
//	{
//		return ((Fib(N - 1)) + (Fib(N - 2)));
//	}
//}
//int main()
//
//{
//	int n;
//	int ret;
//	scanf("%d", &n);
//	ret =Fib(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//非递归
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int Fib(int N)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (N > 2)
//	{
//		c = a+b;
//		b = a;
//		a = c;
//		N = N - 1;
//	}
//	return c;
//}
//int main()
//
//{
//	int n;
//	int ret;
//	scanf("%d", &n);
//	ret =Fib(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//2.n的k次方
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int power(int N,int K)
//{
//	if (K==0)
//	{
//		return 1;
//	}
//		return (N*(power(N, (K-1))));
//
//}
//int main()
//
//{
//	int n;
//	int ret;
//	int k;
//	scanf("%d %d", &n,&k);
//	ret = power(n,k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//3.1709=1+7+0+9位数相加
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int DigitSum(int n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	else
//	{
//		return (n % 10 + DigitSum(n / 10));     
//	}
//}
//int main()
//
//{
//	int n;
//	int ret;
//	scanf("%d", &n);//DigitSum(n)，
//	ret = DigitSum(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//4.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int  reverse_string(char* string) {
//		if (*string == '\0') {
//			return 0;
//		}
//		reverse_string(string + 1);
//		printf("%c", *string);
//	}
//	
//	int main() {
//		char str[10];
//		scanf("%9s", str);
//		printf("反向排序为");
//		reverse_string(str);
//		printf("\n");
//		system("pause");
//		return 0;
//	}
//5.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int  mystrlen(char* str)
//{
//	if (*str=='\0')
//	{
//		return 0;
//	}
//	return 1 + mystrlen(str + 1);
//}
//int main()
//{
//	char str[10] = "0";
//int ret;
//	scanf("%s", str);//strlen 字符串长度
//	ret = mystrlen(str);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char str[10] = "asdjdbcd";
//	int i;
//	int ret;
//	//scanf("%s", str);//strlen 字符串长度
//	for (i = 1; str[i] != '\0'; i++)
//		ret = 1+i;
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//6.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int  Jiecheng(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//		return (n*Jiecheng(n - 1));
//}
//int main()
//
//{
//	int n;
//	int ret;
//	scanf("%d", &n);//阶乘
//	ret = Jiecheng(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int  Jiecheng(int n)
//{
//	int i;
//	int cl=1;
//	for (i = 1; i <= n; i++)
//	{
//		cl *= i;
//	}
//	return cl;
//}
//int main()
//
//{
//	int n;
//	int ret;
//	scanf("%d", &n);//阶乘
//	ret = Jiecheng(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//7.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//void Zhengshu(int n)
//{
//	if (n <= 9)
//	{
//		printf("%3d", n);
//	}
//	else
//	{
//		Zhengshu(n / 10);
//		printf("%3d",n%10);
//	}
//}
//int main()
//
//{
//	int n;
//	int ret;
//	scanf("%d", &n);
//	Zhengshu(n);
//	system("pause");
//	return 0;
//}