/*charcode.c-��ʾ�ַ��Ĵ�����*/

#include <stdio.h>

int main(void)
{
	int ch;

	printf("Please enter a character.\n");
	scanf("%d", &ch);//�û������ַ�
	printf("The code for %c is %d.\n", ch, ch);

	getchar();
	getchar();
	return 0;
}