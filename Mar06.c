#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char*argv[])
{
    if (argc != 3) {
        printf("���α׷� ���� �����Դϴ�\n");
        printf("���� : print_strings ���ڿ� �ݺ�Ƚ��");
    }
    else
    {
        int cnt = (int)(*argv[2]) - '0';
        for (int i = 0; i < cnt; i++) {
            printf("%s\n", argv[1]);
        }
    }
    return 0;
}