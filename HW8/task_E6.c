#include <stdio.h>
#define N 12

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
    printf("%.2f", average(s));
    return 0;
}
float average(int n[])
{
	float sum = 0;
	for(int i = 0; i < N; i++)
	{
		sum+=(float)n[i];
	}
	return (sum/(float)N);
}
