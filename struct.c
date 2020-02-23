#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	int num;//학번
	char name[20];//이름
	int kor, eng, math;//국,영,수 점수
	int tot;//총점
	double avg;
	char grade;
}student;

void put_info(student *ps)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("학번 : ");
		scanf("%d", &(ps + i)->num);
		printf("이름 : ");
		scanf("%s", &(ps + i)->name);
		printf("국어,영어,수학 점수 : ");
		scanf("%d%d%d", &(ps + i)->kor, &(ps + i)->eng, &(ps + i)->math);
		ps[i].tot = ps[i].kor + ps[i].eng + ps[i].math;
		ps[i].avg = (ps + i)->tot / 3.0;
		if ((ps + i)->avg >= 90.0)	ps[i].grade = 'A';
		else if ((ps + i)->avg >= 80.0)	ps[i].grade = 'B';
		else if ((ps + i)->avg >= 70.0)	ps[i].grade = 'C';
		else if ((ps + i)->avg >= 60.0)	ps[i].grade = 'D';
		else if ((ps + i)->avg >= 50.0)	ps[i].grade = 'E';
		else ps[i].grade = 'F';
	}
}
void print_data(student* ps)
{
	int i;
	for (i = 0; i < 5; i++) {
		printf("%5d%5s%5d%5d%5d%5d%5.1lf%5c\n", ps->num, ps->name, ps->kor, ps->eng, ps->math, ps->tot, ps->avg, ps->grade);
		ps++;
	}
}
void sort_data(student* ps)
{
	for (int i = 0; i < 4; i++)
	{
		int max = i;
		for (int j = i + 1; j < 5; j++)
		{
			if (ps[max].tot < ps[j].tot)	max = j;
		}
		if (max != i)
		{
			student temp;

			temp = ps[i];
			ps[i] = ps[max];
			ps[max] = temp;
		}
	}
}

int main(void)
{
	student s[5];
	put_info(&s);
	printf("# 정렬 전 데이터\n");
	print_data(&s);
	sort_data(&s);//내림차순정렬
	printf("# 정렬 후 데이터\n");
	print_data(&s);
	return 0;
}