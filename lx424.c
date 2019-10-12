#include <stdio.h>
int main (void)
{
	int i,j,a,b;
	printf("让我们来画一个金字塔。\n金字塔有几层：");
	scanf("%d",&a);
	for (i=1;i<=a;++i) {
		for(j=1;j<=a-i;j++)
			putchar(' ');
		for(j=1;j<=i*2-1;j++)
			putchar('*');
		printf("\n");
	}
	return 0;
}

