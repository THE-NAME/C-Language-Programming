/*platinum.c -- your weight in platinum*/
#include <stdio.h>
int main(void)
{
	float weight;
	float value;

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");

	scanf("%f", &weight);//键入的字符以及回车键都存在数据缓冲区，scanf读取键入的字符
	value = 1700.0*weight*14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that!If platinum prices drop,\n");
	printf("eat more to maintain your value.");

	getchar();//getchar读取回车键（换行符）
	getchar();//getchar让程序继续等待键入字符（暂停）
	return 0;
}