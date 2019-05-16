#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 3;
	int j = 5;
	int k;
	k = i;
	i = j;
	j = k;
	printf("i=%d j=%d", i, j);
	system("pause");
	return 0;
}