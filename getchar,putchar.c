#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//���ڿ��� �Է¹޾� ���� �� ���ڿ��� ���̸� ����Ͻÿ�.
	char ch;
	int len, max = 0;
	while (1) {
		len = 0; // ���ڿ� ���� �ʱ�ȭ
		ch = getchar();
		if (ch == EOF) break; // EOF = '^Z(ctrl + Z)'= -1
		while (ch != '\n') {
			len++;
			ch = getchar();
		}
		printf("���ڿ��� ���� : %d", len);
		if (len > max) max = len; // ���� �� ���ڿ� ����
		printf("\n");
	}
	printf("���� �� ���ڿ��� ���� : %d", max);
	return 0;
}

