#include <stdio.h>
int main(void)
{
	int i,j;
	int a[4][3]={{94,59,59},{78,49,64},{48,89,89},{45,46,48}};
	int b[3][4]={{21,15,13,23},{14,12,11,23},{11,14,45,56}};
	int c[3][3];

	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			c[i][j]=a[i][j]*b[i][j];
	}
	puts("4行3列矩阵");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
			printf("%4d",a[i][j]);
	putchar('\n');
	}
        puts("3行4列矩阵");
        for(i=0;i<3;i++){
                for(j=0;j<4;j++)
                        printf("%4d",b[i][j]);
        putchar('\n');
        }
	puts("乘积");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++)
                        printf("%4d",c[i][j]);
        putchar('\n');
        }

	return 0;
}
