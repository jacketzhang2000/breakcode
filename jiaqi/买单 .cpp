#include <stdio.h>
int main()
{
	int m,n,i,j,min,index,count=0;
	int a[n];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(n>1&&n<100&&m>1&&m<10000)
	{
		for(i=0;i<n-1;i++){
		min=i;
		for(j=min+1;j<n;j++){
			if(a[j]<a[min])
			min=j;
		}
			if(min!=i){
				index=a[min];
				a[min]=a[i];
				a[i]=index;
			}	
		}
	}
	min=0;
	for(i=0;i<n;i++){
		min+=a[i];
		count++;
		if(min>m) 
		{
			count--;
		break;
	}
	}
	printf("%d",count);
	return 0;
}
