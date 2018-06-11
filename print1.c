/*print1.c - 演示printf（）的一些特性*/
/*base.c--以十进制、八进制、十六进制打印十进制数100*/
#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;

	int x = 100;

	printf("Doing it right:");
	printf("%d minus %d is %d \n", ten, 2, ten - two);
	printf("Doing it wrong:");
	printf("%d minus %d is %d\n", ten);//遗漏两个参数

	printf("dec=%d;octal=%o;hex=%x\n", x, x, x);
	printf("dec=%d;octal=%#o;hex=%#x\n", x, x, x);//如果要在八进制和十六进制值前面显示0和0x前缀，要分别在转换说明中加#

	getchar();
	return 0;

}