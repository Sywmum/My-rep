#include <stdio.h>
int main (void)
{
	int a,b;
	printf("请输入两个整数：\n");
	printf("整数A："); scanf("%d",&a);
	printf("整数B："); scanf("%d",&b);
	if (a>b)
	   puts("A大于B。");
	else
	   puts("B大于A。");
	return 0;
}
