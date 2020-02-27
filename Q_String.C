#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_SIZE 80
#pragma warning(disable:4101)

// 문장 맨 앞에 공백은 지우고 단어와 단어 사이의 공백은 하나고 마지막 단어 뒤의 공백은 지우기.

int read_line(char str[], int limit);
int read_line_with_compressed(char compressed [], int  limit);

int main(void)
{
	char line[BUFFER_SIZE];
	while (1)
	{
		printf("$ : ");
		int length = read_line_with_compressed(line, BUFFER_SIZE);
		printf("%s,%d\n", line, length);
	}
	return 0;
}
int read_line(char str[], int limit) // 한줄입력 // 
{
	int ch, i = 0;
	while ((ch = getchar()) != '\n')
		if(i<limit) str[i++] = ch;

	str[i] = '\0';

	return i;
}
int read_line_with_compressed(char compressed[], int  limit)
{
	int ch, i = 0;
	while ((ch = getchar()) != '\n')
	{
		if (i < limit - 1 && (!isspace(ch) || i > 0 && !isspace(compressed[i - 1])))
			compressed[i++] = ch;
	}
	if (i > 0 && isspace(compressed[i - 1])) i--;
		compressed[i] = '\0';
		return i;
}