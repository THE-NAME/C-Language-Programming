/*charcode.c-显示字符的代码编号*/

#include <stdio.h>

int main(void)
{
	int ch;

	printf("Please enter a character.\n");
	scanf("%d", &ch);//用户输入字符
	printf("The code for %c is %d.\n", ch, ch);

	getchar();
	getchar();
	return 0;
}