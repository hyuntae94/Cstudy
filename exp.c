#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma pack(1)

void 소수출력(void)
{
	//소수(prime number)출력 프로그램
	//2 이상의 정수를 입력하여 2부터 입력한 수까지의 모든 소수를 출력합니다. 단, 한 줄에 5개씩 5칸 간격으로 출력합니다.
	//조건 1. 일단 소수라고 가정한다.int pn=1;
	//조건 2. 2부터 그 정수보다 하나 작은 수까지 하나라도 나누어 떨어지면 가정을 취소한다.
	int a;
	int cnt = 0;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	int ary[200] = { 0 };
	ary[2] = 2; //i=2일때는 무조건 2출력
	for (int i = 3; i <= a; i++) // i는 3부터 
	{
		
		for (int j = 2; j <i; j++)
		{
			if (i % j == 0) break; //나눠떨어지면 종료
			else ary[i] = i;
			//만약에 10이 입력되면 a=10 ; 2,3,4,5,6,7,8,9,10 -> i의 경우 값
			//i=2일때 무조건 2출력
			//i=3일때 j= 2, 나누면 나머지 1 -> 3 출력
			//i=4일때 j=2,3// 2로 나누면 나머지 0 -> break;
			//i=5일때 j=2,3,4// 2로 나누면 나머지 1 ->  5 출력
			                 // 3으로 나누면 나머지 2-> 5 출력
			                 // 4로 나누면 나머지 1 ->  5출력
			//i=6일때 j=2,3,4,5 // 2로 나누면 나머지 0 -> break;
 		}
	}
	for (int i = 2; i <= a; i++)
	{
		if (ary[i] == 0) continue; //0 이면 패스
		printf("%5d", ary[i]);
		cnt++;
		if (cnt == 5)
		{
			printf("\n");
			cnt = 0;
		}
	}
}
void 숙제(void)
{	//대소문자 변환 프로그램 
	//키보드로부터 문장을 입력받은 후에 대문자를 찾아 소문자로 바꾸는 프로그램 작성하세요
	//바뀐 문자의수도 함께 출력
	char str[200];
	int count = 0;
	printf("문장 입력 : ");
	gets(str);//문장 전체 입력
	for (int i = 0; i < strlen(str); i++)//문자 처음부터 끝까지 
	{
		if (str[i] <= 90 && str[i] >= 65)//대문자 아스키 범위
		{
			str[i] += 32;//소문자 치환
			count++;//바뀐 수
		}
	}
	printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자 수 : %d\n", count);

	printf("%d\n", 'a');//a~z(97~122)
	printf("%d\n", 'A');//A~Z(65~90)
	
	/*if ('a' > 'b')
		printf("%d",1);
	else
		printf("%d",0);*/
}
void 풀이2(void)
{//문장 입력 받고 문장크기에 맞게 동적할당
	char temp[200];
	int count = 0;
	printf("문장 입력 : ");
	gets(temp);
	char* p;
	p = (char*)malloc(strlen(temp)+1);
	if (p == NULL)
	{
		printf("메모리 부족\n");
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
	printf("출력 문장 : %s\n", p);
	printf("바뀐 수 : %d\n", count);
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
void 예제(void)
{
	struct student st;
	st.pf.age = 17;
	st.pf.ht = 164.5;
	st.id = 140485;
	st.grade = 3.5;
	printf("나이 : %d\n", st.pf.age);
	printf("키 : %.1lf\n", st.pf.ht);
	printf("학번 : %d\n", st.id);
	printf("학점 : %.1lf\n", st.grade);
}
int main(void)
{

	return 0;
}