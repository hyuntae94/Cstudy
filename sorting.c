#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

static void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void sorting(int* arr) // 내림차순
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			if (arr[i] < arr[j])
			{
				swap(&arr[i], &arr[j]);//swap(arr+i,arr+j);
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", arr[i]);
	}
	printf("\n");
}
void unsorting(int* arr) //오름차순
{
	for (int i = 0; i < 5; i++)
		{
			for (int j = i; j < 5; j++)
			{
				if (arr[i] > arr[j])
				{
					swap(&arr[i], &arr[j]); // swap(arr+i,arr+j);
				}
			}
		}
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", arr[i]);
	}
	printf("\n");
}
void rank(int* arr)
{
	int arr1[5] = { 0 }; // 순위저장
	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{ 
			if (arr[i] < arr[j]) cnt++;
		}
		arr1[i] = cnt;
		cnt = 0; //초기화
	}
	printf("rank : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]+1);
	}
	printf("\n");
}
int main(void)
{
	int arr[5];
	printf("정수 5개 입력 :	");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", arr+i);
	}
	rank(arr);
	sorting(arr);
	unsorting(arr);
	return 0;
}

