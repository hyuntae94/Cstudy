#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void show_lotto(void)
{
	int i = 0;
	int ary[6] = { 0 };
	for (;;)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", &ary[i]);
		for (int k = 0; k < 6; k++)
		{
			if (ary[k] <= 0 || ary[k] >= 46)
			{
				printf("�ٽ��Է��ϼ���!!\n");
				i--;
				break;
			}
		}
		for (int j = 0; j < i; j++)
		{
			if (ary[i] == ary[j])
			{
				printf("���� ��ȣ�� �ֽ��ϴ�\n");
				i--;
				break;
			}
		}
		i++;
		if (i == 6) break;
	}
	printf("�Էµ� �ζ� ��ȣ : ");
	for (i = 0; i < 6; i++)
	{
		printf("%3d", ary[i]);
	}
}
int main(void)
{
	show_lotto();
	return 0;
}