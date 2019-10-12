#include <stdio.h>
int main (void)
{
	int a,i,j;
	printf(" |");
	for (i=1;i<=9;i++)
		printf("%3d",i);
	printf("\n");
	for (a=1;a<=30;a++)
		putchar('-');
	printf("\n");
	for (i=1;i<=9;i++) {
		printf("%d|",i);
		for(j=1;j<=9;j++)
		printf("%3d",i*j);
		putchar('\n');
	}
	return 0;
}

