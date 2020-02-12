#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int* copy(int*pi, int cnt)
{
	int* pj = (int*)malloc(cnt * sizeof(int));
	for (int i = 0; i < cnt; i++)
		pj[i] = pi[i];
	return pj;
}
void swap(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int* print_sorting(int* pj)
{
	for (int i = 0; i <_msize(pj)/sizeof(pj); i++)
	{
		for (int j = i; j < _msize(pj) / sizeof(pj); j++)
		{
			if (pj[i] < pj[j])
				swap(&pj[i], &pj[j]);
		}
	}
	return pj;
}

int main(void)
{
	int cnt = 0;
	printf("입력할 개수 : ");
	scanf("%d", &cnt);

	int* pi;
	pi = (int*)malloc(cnt * sizeof(int));

	printf("%d개의 수를 입력하시오 :  ", cnt);
	for (int i = 0; i < cnt; i++)
	{
		scanf("%d", &pi[i]);
	}
	int* pj = copy(pi,cnt);
	print_sorting(pj);
	for (int i = 0; i < cnt; i++)
	{
		printf("%5d", pj[i]);
	}
	for (int i = 0; i < cnt; i++)
	{
		printf("%5d", pi[i]);
	}
	return 0;
}