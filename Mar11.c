#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFERSIZE 80
#define CAPACITY 100

char* WordList[CAPACITY];
char temp[BUFFERSIZE];
int cnt = 0;

void Input_Data(void)
{	
	while (1) {
		printf("�ܾ� �Է� : ");
		fgets(temp, sizeof(temp), stdin);
		temp[strlen(temp) - 1] = '\0';
		if (strcmp(temp, "end") == 0)return;
		if ((cnt > 0) && (WordList[cnt - 1][strlen(WordList[cnt - 1])-1] != temp[0])) {
			printf("�ܾ��ձⰡ �Ұ����մϴ�\n");
			continue;
		}
		WordList[cnt] = (char*)malloc(sizeof(temp));
		strcpy(WordList[cnt], temp);
		cnt++;
		for (int i = 0; i < cnt-1; i++) {
			if (strcmp(temp, WordList[i]) == 0) {
				printf("# �̹� �����ϴ� �ܾ��Դϴ�.\n");
				cnt--;
				break;
			}
		}
	}
}
void Show_Data(void)
{
	for (int i = 0; i < cnt; i++)
	{
		printf("%s ", WordList[i]);
	}
}

int main(void)
{
	Input_Data();
	Show_Data();
	for (int i = 0; i < cnt; i++) {
		free(WordList[i]);
	}
	return 0;
}