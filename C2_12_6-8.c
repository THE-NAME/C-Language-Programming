/*�����ϰ6*/
#include <stdio.h>
void smile(void);
void one_three(void);
void two(void);

int main(void)
{
	int toes;
	toes = 10;

	printf("toes��ֵ��%d \n", toes);
	printf("toes��������%d \n", toes+toes);
	printf("toes��ƽ����%d \n", toes*toes);

	smile(); smile(); smile();
	printf("\n");
	smile(); smile();
	printf("\n");
	smile();

	printf("\nstarting now:");
	one_three();
	printf("\ndone!");

	getchar();
	return 0;

}

void smile(void)
{
	printf("Smile!");

}

void one_three(void)
{
	printf("\none");
	two();
	printf("\nthree");
}

void two(void)
{
	printf("\ntwo");
}