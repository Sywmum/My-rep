#include <stdio.h>
int main (void)
{
	int i,no;
	printf("正整数：");
	scanf("%d",&no);
	i=no;
	while (no-->0){ 
		putchar('*');
	}
       	if (i>=0)
	printf("\n");

	return 0;
}

