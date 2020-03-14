#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int check_dup(char(*ps)[20], char*pt, int cnt)
{
	for (int i = 0; i < cnt; i++) {
		if (strcmp(ps[i], pt) == 0) {
			printf("#중복된 이름입니다.\n");
			return 1;
		}
	}
	return 0;
}
int input_name(char(*ps)[20])
{
	int cnt = 0;
	char temp[20];
	while (1) {
		printf("이름 : ");
		fgets(temp, sizeof(temp), stdin);
		temp[strlen(temp)-1]= '\0';
		if (strcmp(temp, "end") == 0) return cnt; //1st
		int ch = check_dup(ps, temp, cnt); //2nd 
		if (!ch) strcpy(ps[cnt++], temp);//3rd 
		if (cnt == 10) return cnt;
	}
}
void print_name(char(*ps)[20], int cnt)
{
	printf("#총 %d명이 입력되었습니다.\n", cnt);
	for (int i = 0; i < cnt; i++)
	{
		printf("%s\n", ps[i]);
	}
}
int main(void)
{
	char name[10][20];
	int cnt;

	cnt = input_name(name);
	print_name(name, cnt);
	return 0;
}