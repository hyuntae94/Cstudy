#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80];
	char str2[80];
	char str3[80];
	char* p[3] = { str1,str2,str3 };
	printf("문자 입력 : ");
	for (int i = 0; i < 3; i++)
	{
		scanf("%s", p[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			if (strcmp(p[i], p[j]) > 0)
			{
				char temp[80];
				strcpy(temp, p[i]);
				strcpy(p[i], p[j]);
				strcpy(p[j], temp);
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%s\t", p[i]);
	}
	return 0;
}