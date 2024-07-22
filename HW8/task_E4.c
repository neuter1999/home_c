#include <stdio.h>
#define N 10

int sum_two_max(int n[]);
int main(int argc, char **argv)
{
    int s[N];
    int i = 0;
    while(i < N)
	{
		scanf("%d", &s[i]);
		i++;
	}
    printf("%d", sum_two_max(s));
    return 0;
}
int sum_two_max(int n[])
{
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < (N-1); j++)
		{
			if (n[j] > n[j+1])
			{
				int b = n[j];
				n[j] = n[j+1];
				n[j+1] = b;
			}
		}
	}
	return (n[N-1] + n[N-2]);
}
