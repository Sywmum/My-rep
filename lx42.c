#include <stdio.h>
int main (void)
{
	int sum=0;
	int a,b;

	printf("请输入两个整数：\n");
	printf("整数1："); scanf("%d",&a);
        printf("整数2："); scanf("%d",&b);
	do {
		sum=sum+a;
		a=a+1;
	}while (a!=b+1);
	printf("大于等于整数1小于等于整数2的所有整数的和是%d\n",sum);
	return 0;
}
