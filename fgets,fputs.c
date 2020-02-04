#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

//a.txt 생성 -> monkey likes\n
//			    banana\n
//fgets(입력할 배열,배열의 크기, 파일포인터 or stdin)
//fputs(출력할 배열,파일포인터 or stdout)
int main(void)
{
	FILE* ifp, *ofp;
	char str[80];
	char* res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일을 찾지 못했습니다.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일을 찾지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		res = fgets(str, sizeof(str), ifp);
		if (res == NULL)
		{
			break;
		}
		str[strlen(str) - 1] = '\0';
		fputs(str, ofp);
		fputs(" ", ofp);
	}
	fclose(ifp);
	fclose(ofp);
	return 0;
}