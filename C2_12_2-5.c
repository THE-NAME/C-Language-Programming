/*编程练习2.12*/
#include <stdio.h>
void jolly(void);
void deny(void);
void br(void);
void ic(void);
int main(void)
{
	int age, age_days;

	age = 22;
	age_days = age * 365;
	printf("我的名字是：王泽康\n");
	printf("地址：南京理工大学\n");
	printf("我的年龄：%d，一共包含%d天\n", age, age_days);
	jolly();
	deny();
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();

	getchar();
	return 0;

}

void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
	printf("For he's a jolly good fellow!\n");
	printf("For he's a jolly good fellow!\n");

}

void deny(void)
{
	printf("Which nobody can deny!\n");

}

void br(void)
{
	printf("Brazil,Russia");

}

void ic(void)
{
	printf("India,China");
}