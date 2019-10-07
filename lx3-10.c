#include <stdio.h>
int main(void)
{
	int a,b,c,min;
	puts("请输入三个整数。");
	printf("整数1:"); scanf("%d",&a);
	printf("整数2:"); scanf("%d",&b);
	printf("整数3:"); scanf("%d",&c);

	if (a==b || a==c || b==c)
	   if (a==b && b==c && a==c) puts("三个值都相等");
	   else puts("有两个值相等");
	else puts("三个值各不相同");
	return 0;
}

