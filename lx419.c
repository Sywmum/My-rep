#include <stdio.h>
int main (void)
{
	int i,n,a;
	printf("整数值：");
	scanf("%d",&n);
	a=0;
	for (i=1;i<=n;i++) {
		if(n%i==0) {
		printf("%d\n",i);
		a=a+1;
	}
	}
	printf("约数有%d个\n",a);
	return 0;
}

