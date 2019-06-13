#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char data[1000];
	int len;

}HighAcc;
HighAcc add(HighAcc a, HighAcc b)
{
	HighAcc sum = { 0 };
	int tmp;
	int i;
	int maxlen = a.len > b.len ? a.len : b.len;
	for (i = 0; i < maxlen; i++)
	{
		tmp = a.data[i] + b.data[i]
	}
}
void reverse_string(HighAcc * h)
{
	int i = 0, j = strlen(h->data) - 1;
	hlen    = j + 1;
	char tmp;
	for (; i <= j; i++, j--)
	{
		tmp=h->data[i];
		h->data[i] = h->data[j]-'0';
		h->data[j] = tmp-'0';
	}
}
void printnumber(HighAcc h)
{
	int i;
	for (i )
	{

	}
}
int main()
{
	struct  HighAcc a, b, sum;
	int i;
	scanf("%s%s", &a.data, &b.data);
	reverse_string(a);
	reverse_string(b);
	return 0;
}