#include <stdio.h>
#define N 10

void shift(int n[]);
int main(int argc, char **argv)
{
    int s[N];
    int i = 0;
    while(i < N)
	{
		scanf("%d", &s[i]);
		i++;
	}
    shift(s);
    return 0;
}
void shift(int n[])
{
	int first = n[0];
	n[0] = n[N-1];
	for (int i = (N-1); i > 1; i--)
	{
		n[i] = n[i-1];
	}
	n[1] = first;
	for(int i = 0; i < N; i++)
	{
		printf("%d ", n[i]);
	}
}
