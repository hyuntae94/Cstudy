#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma pack(1)

void �Ҽ����(void)
{
	//�Ҽ�(prime number)��� ���α׷�
	//2 �̻��� ������ �Է��Ͽ� 2���� �Է��� �������� ��� �Ҽ��� ����մϴ�. ��, �� �ٿ� 5���� 5ĭ �������� ����մϴ�.
	//���� 1. �ϴ� �Ҽ���� �����Ѵ�.int pn=1;
	//���� 2. 2���� �� �������� �ϳ� ���� ������ �ϳ��� ������ �������� ������ ����Ѵ�.
	int a;
	int cnt = 0;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	int ary[200] = { 0 };
	ary[2] = 2; //i=2�϶��� ������ 2���
	for (int i = 3; i <= a; i++) // i�� 3���� 
	{
		
		for (int j = 2; j <i; j++)
		{
			if (i % j == 0) break; //������������ ����
			else ary[i] = i;
			//���࿡ 10�� �ԷµǸ� a=10 ; 2,3,4,5,6,7,8,9,10 -> i�� ��� ��
			//i=2�϶� ������ 2���
			//i=3�϶� j= 2, ������ ������ 1 -> 3 ���
			//i=4�϶� j=2,3// 2�� ������ ������ 0 -> break;
			//i=5�϶� j=2,3,4// 2�� ������ ������ 1 ->  5 ���
			                 // 3���� ������ ������ 2-> 5 ���
			                 // 4�� ������ ������ 1 ->  5���
			//i=6�϶� j=2,3,4,5 // 2�� ������ ������ 0 -> break;
 		}
	}
	for (int i = 2; i <= a; i++)
	{
		if (ary[i] == 0) continue; //0 �̸� �н�
		printf("%5d", ary[i]);
		cnt++;
		if (cnt == 5)
		{
			printf("\n");
			cnt = 0;
		}
	}
}
void ����(void)
{	//��ҹ��� ��ȯ ���α׷� 
	//Ű����κ��� ������ �Է¹��� �Ŀ� �빮�ڸ� ã�� �ҹ��ڷ� �ٲٴ� ���α׷� �ۼ��ϼ���
	//�ٲ� �����Ǽ��� �Բ� ���
	char str[200];
	int count = 0;
	printf("���� �Է� : ");
	gets(str);//���� ��ü �Է�
	for (int i = 0; i < strlen(str); i++)//���� ó������ ������ 
	{
		if (str[i] <= 90 && str[i] >= 65)//�빮�� �ƽ�Ű ����
		{
			str[i] += 32;//�ҹ��� ġȯ
			count++;//�ٲ� ��
		}
	}
	printf("�ٲ� ���� : %s\n", str);
	printf("�ٲ� ���� �� : %d\n", count);

	printf("%d\n", 'a');//a~z(97~122)
	printf("%d\n", 'A');//A~Z(65~90)
	
	/*if ('a' > 'b')
		printf("%d",1);
	else
		printf("%d",0);*/
}
void Ǯ��2(void)
{//���� �Է� �ް� ����ũ�⿡ �°� �����Ҵ�
	char temp[200];
	int count = 0;
	printf("���� �Է� : ");
	gets(temp);
	char* p;
	p = (char*)malloc(strlen(temp)+1);
	if (p == NULL)
	{
		printf("�޸� ����\n");
		exit(1);
	}
	strcpy(p, temp);
	for (int i = 0; i < strlen(p); i++)
	{
		if (p[i] <= 90 && p[i] >= 65)
		{
			p[i] += 32;
			count++;
		}
	}
	printf("��� ���� : %s\n", p);
	printf("�ٲ� �� : %d\n", count);
	free(p);
}
struct profile
{
	int age;
	double ht;
};
struct student
{
	struct profile pf;
	int id;
	double grade;
};
void ����(void)
{
	struct student st;
	st.pf.age = 17;
	st.pf.ht = 164.5;
	st.id = 140485;
	st.grade = 3.5;
	printf("���� : %d\n", st.pf.age);
	printf("Ű : %.1lf\n", st.pf.ht);
	printf("�й� : %d\n", st.id);
	printf("���� : %.1lf\n", st.grade);
}
int main(void)
{

	return 0;
}