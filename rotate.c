#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

static void swap(int** a, int** b)
{
	int* temp;
	temp = **a;
	**a = **b;
	**b = temp;
}
static void rotate(int* a, int* b, int* c,int* d)
{
	char enter;
	printf("%d : %d : %d : %d", *a, *b, *c, *d);
	scanf("%c", &enter);
	do
	{
		if (enter == '\n')
		{
			swap(&a, &b);
			swap(&b, &c);
			swap(&c, &d);
			printf("%d : %d : %d : %d", *a, *b, *c, *d);
			scanf("%c", &enter); 
		}
	} while (enter == '\n');
}

/*재귀함수를 이용한 방법*/

/*void rotate(int* pa,int* pb,int* pc) 
{
	printf("%d : %d : %d", *pa, *pb, *pc);
		
	while (1) 
	{
		char ch = getchar();
		
		if (ch == '\n') 
		{
			rotate(pb, pc, pa); 
		}
		else exit(0);
	}
}*/

int main(void)
{
	int a = 1, b = 2, c = 3, d = 4;
	rotate(&a, &b, &c, &d);
	return 0;
}