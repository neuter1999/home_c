#include <stdio.h>
#define N 5

int minimum(int n[]);
int main(int argc, char **argv)
{
    int s[N];
    int i = 0;
    while(i < N)
	{
		scanf("%d", &s[i]);
		i++;
	}
    printf("%d", minimum(s));
}
int minimum(int n[])
{
	int min = 2147483647;
	for(int i = 0; i < N; i++)
	{
		if(n[i] < min)
			min = n[i];
	}
	return min;
}
