#include <stdio.h>
int main(void)
{
	int i,j;
	int a[6][2]={{59,59},{78,64},{89,89},{46,48},{59,79},{49,98}};
	int b,c;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			b[i][j]+=a[i][j];
	}
	puts("语文");
	for(i=0;i<6;i++){
		printf("%3d",a[i]);
	putchar('\n');
	}
        puts("数学");
        for(i=0;i<3;i++){
                printf("%3d",a[j]);
        putchar('\n');
        }
	puts("总分");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++)
                        printf("%3d",a[i]+a[j]);
        putchar('\n');
        }
        puts("平均分");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++)
                        printf("%3d",(a[i]+a[j])/2);
        putchar('\n');
	}
	return 0;
}

