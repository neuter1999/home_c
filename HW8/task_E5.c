#include <stdio.h>
#define N 10

int sum_all_positive(int n[]);
int main(int argc, char **argv)
{
    int s[N];
    int i = 0;
    while(i < N)
	{
		scanf("%d", &s[i]);
		i++;
	}
    printf("%d", sum_all_positive(s));
    return 0;
}
int sum_all_positive(int n[])
{
	int sum = 0;
	for(int i = 0; i < N; i++)
	{
		if(n[i] > 0)
			sum+=n[i];
	}
	return sum;
}
