#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* ifp, * ofp;
	char name[20];
	int kor, eng, math;
	int tot;
	double avg;
	int res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL)
	{
		printf("파일을 열지 못했습니다.\n");
		return 1;
	}
	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("파일을 열지 못했습니다.\n");
		return 1;
	}
	res = fscanf(ifp, "%s%d%d%d", &name, &kor, &eng, &math);
	while (res != -1)
	{
		tot = kor + eng + math;
		avg = tot / 3.0;
		fprintf(ofp, "%s%5d%7.1lf\n", name, tot, avg);
		res = fscanf(ifp, "%s%d%d%d", &name, &kor, &eng, &math);
	}
	fclose(ifp);
	fclose(ofp);
	return 0;
}