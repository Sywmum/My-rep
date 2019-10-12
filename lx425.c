#include <stdio.h>
int main (void)
{
	int i,j,a,b;
	printf("让我们来画一个向下的金字塔。\n金字塔有几层：");
	scanf("%d",&a);
	for (i=1;i<=a;i++) {
		for(j=1;j<=i;j++)
			putchar(' ');
		for(j=1;j<=(a-i)*2-1;j++)
			printf("%d",i%10);

		printf("\n");
	}
	return 0;
}

