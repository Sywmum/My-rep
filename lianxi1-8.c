#include <stdio.h>
int main(void)
{
	int a,s;
	int no;
	puts("请输入两个整数。");
	printf("整数1："); scanf("%d",&a);
	printf("整数2："); scanf("%d",&s);
	no =a*s;
	printf("它们的乘积是%d。\n",no);
	return 0;
}
