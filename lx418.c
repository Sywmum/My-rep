#include <stdio.h>
int main(void)
{
	int i,n,a;
	printf("显示多少个*：");
	scanf("%d",&n);	

	for (i=n/5;i>0;i--)
		printf("*****\n");

	for (a=n%5;a>0;a--)
		printf("*");
	printf("\n");
	return 0;
}

