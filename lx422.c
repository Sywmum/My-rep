#include <stdio.h>
int main (void)
{
	int i,j,a,b;
	printf("让我们来画一个长方形。\n一边：");
	scanf("%d",&a);
	printf("另一边："); scanf("%d",&b);
	for (i=1;i<=b;i++) {
		for(j=1;j<=a;j++)
		putchar('*');
		printf("\n");
	}
	return 0;
}

