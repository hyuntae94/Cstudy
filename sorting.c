#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void sorting(int* arr[])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			if (i == j)continue;
			if (arr[i] < arr[j])
			{
				swap(&arr[i], &arr[j]);
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("내림차순 : ");
		printf("%5d", arr[i]);
	}
	printf("\n");
}
void unsorting(int* arr[]) 
{
	for (int i = 0; i < 5; i++)
		{
			for (int j = i; j < 5; j++)
			{
				if (i == j)continue;
				if (arr[i] > arr[j])
				{
					swap(&arr[i], &arr[j]);
				}
			}
		}
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", arr[i]);
	}
	printf("\n");
}
void rank(int* arr[])
{
	int arr1[5] = { 0 }; // 순위저장
	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j)continue; 
			if (arr[i] < arr[j]) cnt++;
			arr1[i] = cnt;
		}
		cnt = 0; //초기화
	}
	for (int i = 0; i < 5; i++)
	{
		printf("rank : %d\t", arr1[i]+1);
	}
	printf("\n");
}
int main(void)
{	//2 9 6 8 7

	//4 3 5 2 7(입력받은 값)
	//4보다 큰 수 2개 ->arr[0]=2
	//3보다 큰 수 3개 ->arr[1]=3
	//5보다 큰 수 1개 ->arr[2]=1
	//2보다 큰 수 4개 ->arr[4]=4
	//7보다 큰 수 0개 ->arr[0]=0
	//7 5 4 3 2 sorting   내림차순(swap이용)
	//2 3 4 5 7 unsorting 오름차순
	//3 4 2 5 1 랭크(num이용)
	int arr[5];
	printf("정수 5개 입력 :	");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	rank(arr);
	sorting(arr);
	unsorting(arr);
	return 0;
}
