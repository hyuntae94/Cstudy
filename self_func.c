#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum1(int a)
{
	if (a == 1) return 1;
	else return (a + sum1(a - 1));
}
int sum2(int a)
{
	if (a == 10) return 10;
	else return (a + sum2(a + 1));
}

int main(void)
{
	printf("%d %d", sum1(10),sum2(1));
}