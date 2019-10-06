#include <stdio.h>
int main(void)
{
	int a,s,d;
	int no;
	puts("请输入三个整数。");
	printf("整数1："); scanf("%d",&a);
	printf("整数2："); scanf("%d",&s);
	printf("整数3："); scanf("%d",&d);
	no =a+s+d;
	printf("它们的和是%d。\n",no);
	return 0;
}

