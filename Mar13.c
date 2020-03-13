#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int count_num(int(*pa1)[4], int(*pa2)[4], int(*ps)[2])
{
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (pa1[i][j] == pa2[i][j]) {
				ps[cnt][0] = i;
				ps[cnt][1] = j;
				cnt++;
			}
		}
	}
	return cnt;
}

int main(void)
{
	int ary1[3][4]={
		{15,3,9,11},
		{23,7,10,12},
		{0,17,55,24}
	};

	int ary2[3][4] = {
		{13,8,9,15},
		{23,0,10,11},
		{29,17,43,3}
	};
	int same_num[12][2];
	int i, cnt;
	cnt = count_num(ary1, ary2, same_num);

	for (int i = 0; i < cnt; i++) {
		printf("(%d,%d)\n", same_num[i][0], same_num[i][1]);
	}
	return 0;
}