//1.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int i=0;
//	for (i = 0; i < 32; i++)
//	{
//		unsigned int ret = 0;
//		int i = 0;
//		for (i = 0; i < 32; i++)
//		{
//			ret += ((value >> i) & 1)<<(31-i);
//		}
//		return ret;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//	unsigned int ret = 0;
//	ret=reverse_bit(num);
//	printf("ret=%u\n", ret);
//	system("pause");
//	return 0;
//}
//2.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a=10;
//	int b=20;
//	int c;
//	c = a + b;
//	c=c >> 1;
//	printf("%d", c);
//	system("pause");
//	return 0;
//}
//3.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i, j=0;
//	int a[20] = { 1, 2, 3, 8, 6, 5, 4, 5, 1, 6, 8, 3, 2 };
//	for (i = 0; i < 13; i++)
//	{
//		j^= a[i];
//	}
//	printf("%d\n", j);
//	system("pause");
//	return 0;
//}
//4.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//void reverse_string(char arr[30],int start,int end)
//{
//	//student a am i
//	//	i ma a tneduts
//	//	i am a student
//	int i, j;
//	int tmp;
//	for (i = start, j = end; i < j; i++, j--)
//	{
//		tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//	}
//}
//int main()
//{
//	char arr[30] = "student a am i";
//	int start = 0;
//	int end;
//	int i;
//	for (i = 0; arr[i]; i++)
//	{
//		if (arr[i] == ' ')
//		{
//			end = i - 1;
//            reverse_string(arr, start ,end);
//			start = i+1;
//		}
//	}
//	reverse_string(arr, start, i - 1);
//	reverse_string(arr, 0, i - 1);
//	puts(arr);
//	system("pause");
//	return 0;
//}