#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//문자열을 입력받아 가장 긴 문자열의 길이를 출력하시오.
	char ch;
	int len, max = 0;
	while (1) {
		len = 0; // 문자열 길이 초기화
		ch = getchar();
		if (ch == EOF) break; // EOF = '^Z(ctrl + Z)'= -1
		while (ch != '\n') {
			len++;
			ch = getchar();
		}
		printf("문자열의 길이 : %d", len);
		if (len > max) max = len; // 가장 긴 문자열 저장
		printf("\n");
	}
	printf("가장 긴 문자열의 길이 : %d", max);
	return 0;
}

