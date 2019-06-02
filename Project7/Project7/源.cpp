//1.
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//
//	int A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int B[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int C[10],i;
//	for (i = 0; i < 10; i++){
//	C[i] = A[i];	
//	A[i] = B[i];
//	B[i] = C[i];
//}
//	for (i = 0; i < 10; i++)
//		printf("%5d",A[i]);
//	    printf("\n");
//	for (i = 0; i < 10; i++)
//		printf("%5d", B[i]);
//	    printf("\n");
//	system("pause");
//	return 0;
//}
//2.
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i;
//	double  sum1=0,sum2=0,sum;
//	for (i = 1; i < 100; i = i + 2)
//	{
//		sum1 = sum1 + (1.0 / i);
//	}
//	for (i = 2; i <= 100; i = i + 2)
//	{
//		sum2 = sum2+(1.0 / i);
//	}
//	sum = sum1 - sum2;
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}
//3.
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i, j, count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//个位为9
//			count++;
//		if (i % 100-i%10 == 90)//十位为9
//			count++;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}