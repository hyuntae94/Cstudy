#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Main함수의 명령행 인수 사용
int main(int argc, char** argv) // (인수개수,char포인터배열 시작주소)
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