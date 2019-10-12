#include <stdio.h>
int main (void)
{
	int a,i,no;
	printf("正整数：");
	scanf("%d",&no);
	i=no/2;
	a=no%2;

	while (i-->0){ 
		printf("+-");
	}
       	if (a>0)
	printf("+\n");
	else printf("\n");
	return 0;
}

