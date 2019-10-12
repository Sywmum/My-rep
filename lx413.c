#include <stdio.h>
int main (void)
{
	int i,n,sum;
	printf("n的值：");
	scanf("%d",&n);	
	sum=0;
	for (i=0;i<=n;++i) {
		sum = i+sum;
	}
       	printf("1到%d的和为%d。\n",n,sum);
	return 0;
}

