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
//					{//A选手说：B第二，我第三；
////B选手说：我第二，E第四；
////C选手说：我第一，D第二；
////D选手说：C最后，我第三；
////E选手说：我第四，A第一；
////比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//						if ((B == 2) + (A == 3) == 1 &&
//							(B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 &&
//							(C == 5) + (D == 3) == 1 &&
//							(E == 4) + (A == 1) == 1 &&
//							A*B*C*D*E == 120
//							){
//						
//							printf("A是第%d名\n", A);
//						printf("B是第%d名\n", B);
//						printf("C是第%d名\n", C);
//						printf("D是第%d名\n", D);
//						printf("E是第%d名\n", E);
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
//			printf("%c是凶手\n", killer);
//	}
//						/*A说：不是我。DD
//							B说：是C。
//							C说：是D。
//							D说：C在胡说
//							已知3个人说了真话，1个人说的是假话。
//							现在请根据这些信息，写一个程序来确定到底谁是凶手。*/
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