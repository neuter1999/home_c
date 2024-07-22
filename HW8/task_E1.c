#include <stdio.h>
#define N 5

float average(int n[]);
int main(int argc, char **argv)
{
    int s[N];
    int i = 0;
    while(i < N)
		{
			scanf("%d", &s[i]);
			i++;
		}
    printf("%.3f", average(s));
}
float average(int n[])
{
	float aver = 0;
	for(int i = 0; i < N; i++)
	{
		aver = aver + n[i];
	}
	aver = aver/5;
	return aver;
}
