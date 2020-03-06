#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char*argv[])
{
    if (argc != 3) {
        printf("프로그램 사용법 오류입니다\n");
        printf("사용법 : print_strings 문자열 반복횟수");
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