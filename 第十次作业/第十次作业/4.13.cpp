//1.写一个函数返回参数二进制中 1 的个数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int count_one_bits(unsigned int value)
//{
//	int i=0;// 返回 1的位数 
//	while (value)
//	{
//		if (value % 2 == 1)
//			i++;
//		value /= 2;
//	}
//	return i;
//}
//int main()
//{
//	unsigned int value=0;
//	int ret = 0;
//	scanf("%d",&value );
//    ret=count_one_bits(value);
//	printf("该数字的二进制写法有%d个1\n", ret);
//	system("pause");
//	return 0;
//}
//2.一个数二进制序列中所有的偶数位和奇数位,分别输出二进制序列
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	printf("奇数位序列为");
//	for (i = 31; i>=0; i=i-2)
//	{
//		printf("%d", ((num >> i) & 1));
//	}
//	printf("偶数位序列为");
//	for (i = 30; i >= 0; i=i-2)
//	{
//		printf("%d", ((num >> i) & 1));
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//3.输出一个整数的每一位
//法一
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//  int num = 0;
//	scanf("%d", &num);
//	printf("这个整数的每一位为：");
//	while (num)
//	{
//		printf("%d\t", num % 10);
//		num /= 10;
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//4.两个整数m和n的二进制表达中，有多少个位不同？
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int numa = 0;
//	int numb = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &numa,&numb);
//	for (i = 0; i < 32; i++)
//	{
//		if (((numa >> i) & 1) !=( (numb  >>i)&1))
//			count++;
//
//	}
//	printf("该数二进制表达中，有%d位不同\n",count);
//	system("pause");
//	return 0;
//}