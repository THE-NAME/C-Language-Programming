/*print1.c - ��ʾprintf������һЩ����*/
/*base.c--��ʮ���ơ��˽��ơ�ʮ�����ƴ�ӡʮ������100*/
#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;

	int x = 100;

	printf("Doing it right:");
	printf("%d minus %d is %d \n", ten, 2, ten - two);
	printf("Doing it wrong:");
	printf("%d minus %d is %d\n", ten);//��©��������

	printf("dec=%d;octal=%o;hex=%x\n", x, x, x);
	printf("dec=%d;octal=%#o;hex=%#x\n", x, x, x);//���Ҫ�ڰ˽��ƺ�ʮ������ֵǰ����ʾ0��0xǰ׺��Ҫ�ֱ���ת��˵���м�#

	getchar();
	return 0;

}