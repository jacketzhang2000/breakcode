//1.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//
//{
//	int A,B,C,D,E;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{//Aѡ��˵��B�ڶ����ҵ�����
////Bѡ��˵���ҵڶ���E���ģ�
////Cѡ��˵���ҵ�һ��D�ڶ���
////Dѡ��˵��C����ҵ�����
////Eѡ��˵���ҵ��ģ�A��һ��
////����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//						if ((B == 2) + (A == 3) == 1 &&
//							(B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 &&
//							(C == 5) + (D == 3) == 1 &&
//							(E == 4) + (A == 1) == 1 &&
//							A*B*C*D*E == 120
//							){
//						
//							printf("A�ǵ�%d��\n", A);
//						printf("B�ǵ�%d��\n", B);
//						printf("C�ǵ�%d��\n", C);
//						printf("D�ǵ�%d��\n", D);
//						printf("E�ǵ�%d��\n", E);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//2.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') +( killer == 'D') +( killer != 'D') == 3)
//			printf("%c������\n", killer);
//	}
//						/*A˵�������ҡ�DD
//							B˵����C��
//							C˵����D��
//							D˵��C�ں�˵
//							��֪3����˵���滰��1����˵���Ǽٻ���
//							�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�*/
//	system("pause");
//	return 0;
//}
//3.
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//
//{
//	int data[20] = { 1};
//	int n = 12;
//	int i, j;
//	data[0] = 1;
//	data[1] = 1;
//	for (i = 2; i < n; i++)
//	{
//		for (j = i - 1; j>1; j--)
//		{
//			data[j] += data[j - 1];
//
//			printf("%d ", data[j]);
//		}
//		/*for (i = 1; i < n; i++)*/
//		printf("%d \n",data[0]);
//	}
//
//		
//	system("pause");
//	return 0;
//}