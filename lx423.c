#include <stdio.h>
int main (void)
{
	int i,j,a;
	printf("生成直角在左上方的等腰直角三角形。\n短边：");/*或右下方*/
	scanf("%d",&a);

	for (i=1;i<=a;i++) {
		for(j=0;j<=a-i;j++) /*或putchar入‘ ’*/
			putchar('*');
		printf("\n");
	}
	return 0;
}

