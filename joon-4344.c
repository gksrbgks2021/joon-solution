//#define _CRT_SECURE_NO_WARINGS
//#include<stdio.h>
//#include<math.h>
//
//
//int main()
//{
//	int A,B,n,i,a[3],b[4];//n번째 자리수
//	char s1[10];
//	scanf("%d", &A);
//	scanf("%d", &B);
//
//	a[0] = B / 100; //B의 첫번쨰 자리수를 입력한다.
//	a[1] = (B - a[0]*100) / 10;//B의 두번쨰 자리수를 입력한다.
//	a[2] = (B - a[1] * 10 - a[0] * 100);//B의 세번쨰 자리수를 입력한다.
//
//	b[0] = a[2] * A;
//	b[1] = a[1] * A;
//	b[2] = a[0] * A;
//	b[3] = b[0]+b[1]*10+b[2]*100;
//
//	printf("%d\n%d\n%d\n%d\n",b[0],b[1],b[2],b[3]);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//
//	
//	printf("|\\_/|\n");
//	printf("|q p|   /}\n");
//	printf("(0)\"\"\"\\\n");
//	printf("|\" ^ \"\`    |\n");
//	printf("||_/=\\\\__|");
//	
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//	printf("|\\_/|\n");
//	printf("|q p|   /}\n");
//	printf("( 0 )\"\"\"\\\n");
//	printf("|\"^\"`    |\n");
//	printf("||_/=\\\\__|\n");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
double ave(double sum,int n)//평균
{
	return sum / (double)n;
}
int main()
{
	int a,c,i,j,N,count;
	double* score;
	double qw;
	scanf("%d", &c);//케이스의 개수
	
	for (i = 0; i < c; i++)
	{
		count = 0;
		qw = 0;
		scanf("%d", &N);//학생개수
		score = (double*)calloc(N, sizeof(double));
		for (j = 0; j < N; j++)
		{
			scanf("%lf", &score[j]);
			qw += score[j];
		}
		for (j = 0; j < N; j++)
		{
	
			if (ave(qw, N) < score[j])//평균보다 점수가 크다?
				count++;
		}
		printf("%.3lf%%\n", count / (double)N * 100);
		free(score);
		if (i == c - 1)break;
	}
	return 0;
}