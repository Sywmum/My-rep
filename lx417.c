#include <stdio.h>
int main (void)
{
	int i,n;
	printf("请输入一个整数：");
	scanf("%d",&n);

	for (i=1;i<=n;i++) {
		printf("%d的二次方是",i);
		printf("%d\n",i*i);
	}

	return 0;
}

