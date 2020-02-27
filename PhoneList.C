#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> // isspace

#define BUFFER_SIZE 80
#pragma warning(disable:4101)

//전화번호부 저장

void add(void);
void find(void);
void status(void);
void delete(void);
void escape(void);

char* names[BUFFER_SIZE];
char* numbers[BUFFER_SIZE];
int n = 0;

int main(void)
{
	char func[BUFFER_SIZE];
	while (1)
	{
		printf("$ : ");
		scanf("%s", func);
		if (strcmp(func, "add")==0)
			add();
		else if (strcmp(func, "find")==0)
			find();
		else if (strcmp(func, "status")==0)
			status();
		else if (strcmp(func, "delete")==0)
			delete();
		else if (strcmp(func, "escape")==0)
		{
			escape();
			break;
		}
	}
	return 0;
}
void add(void) 
{
	char buf1[BUFFER_SIZE];
	char buf2[BUFFER_SIZE];
	scanf("%s %s", buf1, buf2);
	
	names[n] = _strdup(buf1); // type _strdup(char*)
	numbers[n] = _strdup(buf2);
	n++;

	printf("%s successfully ! \n", buf1);

}
void find(void) 
{
	char find_name[BUFFER_SIZE];
	scanf("%s", find_name);
	for (int i = 0; i < n; i++) {
		if (strcmp(names[i], find_name) == 0) {
			printf("%s %s\n", names[i], numbers[i]);
			return;
		}
	}
	printf("%s not founded\n", find_name);
}
void status(void) 
{
	for (int i = 0; i < n; i++)
	{
		printf("%s %s\n", names[i], numbers[i]);
	}
	if(n==0) printf("no person registration!\n");
}
void delete(void) 
{
	char delete_name[BUFFER_SIZE];
	scanf("%s", delete_name);
	for (int i = 0; i < n; i++)
	{
		if (strcmp(names[i], delete_name)==0)
		{
			names[i] = names[n - 1];
			numbers[i] = numbers[n - 1];
			n--;
			printf("%s DELETE successfully!\n", delete_name);
			printf("TOTAL : %d -> %d\n", n + 1, n);
			return;
		}
	}
	printf("%s not founded!\n", delete_name);

}
void escape(void) 
{
	printf("################# OFF - PROGRAMMINGS ##################");
	return;
}