#include <stdio.h>
int main(void)
{
	int a;
	puts("请输入一个整数。");
	printf("整数1:"); scanf("%d",&a);

	switch (a%2) {
	 case 1 :puts("该整数是奇数。"); break;
	 case 0 :puts("该整数是偶数。"); break;
	}
	return 0;
}

