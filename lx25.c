#include <stdio.h>
int main(void)
{
	int a,s;
	printf("请输入两个整数。"); 
	printf("整数1："); scanf("%d",&a);
	printf("整数2："); scanf("%d",&s);
	printf("整数1是整数2的%f %。\n",(double)(a/s)*100);
	return 0;
}
