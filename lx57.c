#include <stdio.h>
#define NUMBER 5
int main (void)
{
	int i;
	int x[NUMBER];
	for(i=0;i<NUMBER;i++){
		printf("%2d号:",i+1);
		scanf("%d",&x[i]);
	}
	printf("{");
	for(i=0;i<NUMBER;i++){
		printf("%d",x[i]);
		if(i<NUMBER-1)
			printf(",");
	}
	puts("}");

	return 0;
}

