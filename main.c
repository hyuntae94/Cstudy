#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Main�Լ��� ����� �μ� ���
int main(int argc, char** argv) // (�μ�����,char�����͹迭 �����ּ�)
{
	//case1
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	//case2
	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return 0;
}