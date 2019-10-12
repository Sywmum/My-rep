#include <stdio.h>
int main (void)
{
	int i,n,sum;
	printf("请输入一个整数：");
	scanf("%d",&n);	

	for (i=0;i<=n;++i) {
		printf("%d",i%10);
	}
	printf("\n");
	return 0;
}

