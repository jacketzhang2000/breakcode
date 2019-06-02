#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
	a = 3;
	b = 9;
	c = 7;
	printf("%d", a > b ? a > c ? a : c : b > c ? b : c);
		system("pause");
	return 0;
}