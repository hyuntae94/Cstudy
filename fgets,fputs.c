#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

//a.txt ���� -> monkey likes\n
//			    banana\n
//fgets(�Է��� �迭,�迭�� ũ��, ���������� or stdin)
//fputs(����� �迭,���������� or stdout)
int main(void)
{
	FILE* ifp, *ofp;
	char str[80];
	char* res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL)
	{
		printf("�Է� ������ ã�� ���߽��ϴ�.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("��� ������ ã�� ���߽��ϴ�.\n");
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