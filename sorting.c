#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

static void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void sorting(int* arr) // ��������
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
void unsorting(int* arr) //��������
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
	int arr1[5] = { 0 }; // ��������
	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{ 
			if (arr[i] < arr[j]) cnt++;
		}
		arr1[i] = cnt;
		cnt = 0; //�ʱ�ȭ
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
	printf("���� 5�� �Է� :	");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", arr+i);
	}
	rank(arr);
	sorting(arr);
	unsorting(arr);
	return 0;
}

