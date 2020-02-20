#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	int size = 5;
	int* pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요 : ");
		scanf("%d", &pi[i]);
		if (pi[i] <= 0) break;
		i++;
		if (i % size == 0)
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
	}
	for (int j = 0; j < i; j++)
	{
		printf("%5d", pi[j]);
	}
	free(pi);
	return 0;
}