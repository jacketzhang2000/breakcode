#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10];
	int i,j;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (i = 1,j=a[0]; i < 10; i++){
		if (j < a[i ])
		{
			j = a[i ];
		}
	}
	printf("%d\n", j);
	system("pause");
	return 0;		
}