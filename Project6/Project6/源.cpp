#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b,i,k;
	scanf_s("%d %d", &a, &b);
	for (i=1;i<= a&&i <= b; i++)
	if (a%i == 0 && b%i == 0)
		k = i;
	printf("%d\n", k);
	system("pause");
	return 0;
}