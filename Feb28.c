#define _CRT_SECURE_NO_WARNINGS	

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INIT_CAPACITY 3
#define BUFFER_SIZE 50

char** names;
char** numbers;

int capacity = INIT_CAPACITY;
int n = 0;


char delim[] = " ";

void init_directory(void); // names, numbers 생성
void process_command(void);
int read_line(char command_line[], int limit);
void add(char* name, char* number);

void Q0228(void)
{
	init_directory(); // names, numbers 생성
	process_command();
}
void intit_directory(void) 
{
	names = (char**)malloc(INIT_CAPACITY * sizeof(char*));
	numbers = (char**)malloc(INIT_CAPACITY * sizeof(char*));
}
void process_command(void) 
{
	char command_line[BUFFER_SIZE];
	char* command, * argument1, * argument2;

	while (1) {
		printf("$ ");
		if (read_line(command_line, BUFFER_SIZE) <= 0) continue; // 문장을 통채로 입력받기

		command = strtok(command_line, delim);

		if (strcmp(command, "read") == 0) {
			argument1 = strtok(NULL, delim);
			if (argument1 == NULL) {
				printf("File name required\n");
				continue;
			}
			load(argument1);
		}
		else if (strcmp(command, "add") == 0) {
			argument1 = strtok(NULL, delim);
			argument2 = strtok(NULL, delim);
			if (argument1 == NULL || argument2 == NULL) {
				printf("Invaild argument\n");
				continue;
			}
			add(argument1, argument2);
			printf("%s was added successfully\n", argument1);
		}
		else if (strcmp(command, "find") == 0) {
			argument1 = strtok(NULL, delim);
			if (argument1 == NULL) {
				printf("Invaild argument\n");
				continue;
			}
			find(argument1);
		}
		else if (strcmp(command, "status") == 0) {
			status();
		}
		else if (strcmp(command, "delete") == 0) {
			argument1 = strtok(NULL, delim);
			if (argument1 == NULL) {
				printf("Invaild argument");
				continue;
			}
			delete(argument1);
		}

	}
}
void add(char* name, char* number)
{
	if (n >= capacity) reallocate();
	int i = n - 1;
	while (i > 0 && strcmp(name, names[i]) < 0) {
		names[i + 1] = names[i];
		numbers[i + 1] = numbers[i];
		i--;
	}
	names[i + 1] = _strdup(name);
	numbers[i + 1] = _strdup(number);
	n++;
}
int read_line(char command_line[], int limit)
{
	int i,ch;
	for (i = 0; i < limit - 1; i++) {
		if ((ch = getchar()) != '\n') {
			command_line[i++] = ch;
		}
	}
	command_line[i] = '\0';
	return i;
}