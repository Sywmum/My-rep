#include <stdio.h>
int main(void)
{
	int a,b,c;
	puts("请输入两个整数。");
	printf("整数1:"); scanf("%d",&a);
	printf("整数2:"); scanf("%d",&b);

	if (a>=b) c=a-b;
	else c=b-a;
	
	if (c<=10) printf("它们的差小于等于10\n");
	else printf("它们的差大于等于11\n");
	return 0;
}

