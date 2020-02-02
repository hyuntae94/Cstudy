#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void show_lotto(void)
{
	int i = 0;
	int ary[6] = { 0 };
	for (;;)
	{
		printf("번호 입력 : ");
		scanf("%d", &ary[i]);
		for (int k = 0; k < 6; k++)
		{
			if (ary[k] <= 0 || ary[k] >= 46)
			{
				printf("다시입력하세요!!\n");
				i--;
				break;
			}
		}
		for (int j = 0; j < i; j++)
		{
			if (ary[i] == ary[j])
			{
				printf("같은 번호가 있습니다\n");
				i--;
				break;
			}
		}
		i++;
		if (i == 6) break;
	}
	printf("입력된 로또 번호 : ");
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