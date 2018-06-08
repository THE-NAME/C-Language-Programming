#include<stdio.h>
int main(void)
{
	unsigned int i, j;
	i = -2;
	printf("%d\n",i);
	j = 9;
	printf("%d\n", add(i, j));
	printf("ÄãºÃ£¬C");
	getchar();
	return 0;
} 
add(a, b)
{
	int y;
	y = a + b;
	return y;
}