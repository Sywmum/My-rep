#include <stdio.h>
int main(void)
{
	int a,s;
	puts("请输入两个整数：");
	printf("整数1："); scanf("%d",&a);
	printf("整数2："); scanf("%d",&s);
	printf("它们的和是%d，积是%d。\n",a+s,a*s);
	return 0;
}
