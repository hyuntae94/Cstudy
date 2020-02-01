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
		printf("�������� : ");
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
	int arr1[5] = { 0 }; // ��������
	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j)continue; 
			if (arr[i] < arr[j]) cnt++;
			arr1[i] = cnt;
		}
		cnt = 0; //�ʱ�ȭ
	}
	for (int i = 0; i < 5; i++)
	{
		printf("rank : %d\t", arr1[i]+1);
	}
	printf("\n");
}
int main(void)
{	//2 9 6 8 7

	//4 3 5 2 7(�Է¹��� ��)
	//4���� ū �� 2�� ->arr[0]=2
	//3���� ū �� 3�� ->arr[1]=3
	//5���� ū �� 1�� ->arr[2]=1
	//2���� ū �� 4�� ->arr[4]=4
	//7���� ū �� 0�� ->arr[0]=0
	//7 5 4 3 2 sorting   ��������(swap�̿�)
	//2 3 4 5 7 unsorting ��������
	//3 4 2 5 1 ��ũ(num�̿�)
	int arr[5];
	printf("���� 5�� �Է� :	");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	rank(arr);
	sorting(arr);
	unsorting(arr);
	return 0;
}
