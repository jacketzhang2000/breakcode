#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10] = { 1, 2, 4, 8, 7, 9, 5, 6, 3 };
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int i, k = 0, j = 0;
	int q = 0;
	for (i = 0; i < 9; i++)
	{
		if (arr[i] % 2 == 1)
		{
			arr1[k] = arr[i];
			k++;
		}
		else if (arr[i] % 2 == 0)
		{
			arr2[j] = arr[i];
			j++;
		}

	}
	for (i = 0; i <k; i++)
	{
		arr[i] = arr1[i];
	}
	for (i; i<j + k; i++)
	{
		arr[i] = arr2[q++];
	}
	for (k = 0; k<9; k++)
		printf("%d ", arr[k]);
	system("pause");
	return 0;
}

//½â·¨¶þ

int main1()
{
	int arr[10] = { 1, 2, 4, 8, 7, 9, 5, 6, 3};
	int i = 0, j = 8;
	int count;
	//for (i, j; i >=j; )
	//{
	//	if (arr[i++] % 2 == 0 && arr[j--] % 2 == 1)
	//	{
	//		count = arr[i];
	//		arr[i] = arr[j];
	//		arr[j] = count;
	//	}
	//}
	while (1)
	{
		while (arr[i++] % 2 &&i<10);

		while (arr[j--] % 2 == 0 &&j>=0);
		if (i-1 >= j+1)
		{
			break;
		}
            count = arr[i-1];
	     	arr[i-1] = arr[j+1];
		    arr[j+1] = count;
		
	}
	for (i = 0; i < 9; i++)
		printf("%d ", arr[i]);
	system("pause");
	return 0;
}