//1.дһ���������ز����������� 1 �ĸ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int count_one_bits(unsigned int value)
//{
//	int i=0;// ���� 1��λ�� 
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
//	printf("�����ֵĶ�����д����%d��1\n", ret);
//	system("pause");
//	return 0;
//}
//2.һ�������������������е�ż��λ������λ,�ֱ��������������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	printf("����λ����Ϊ");
//	for (i = 31; i>=0; i=i-2)
//	{
//		printf("%d", ((num >> i) & 1));
//	}
//	printf("ż��λ����Ϊ");
//	for (i = 30; i >= 0; i=i-2)
//	{
//		printf("%d", ((num >> i) & 1));
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//3.���һ��������ÿһλ
//��һ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//  int num = 0;
//	scanf("%d", &num);
//	printf("���������ÿһλΪ��");
//	while (num)
//	{
//		printf("%d\t", num % 10);
//		num /= 10;
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//4.��������m��n�Ķ����Ʊ���У��ж��ٸ�λ��ͬ��
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
//	printf("���������Ʊ���У���%dλ��ͬ\n",count);
//	system("pause");
//	return 0;
//}