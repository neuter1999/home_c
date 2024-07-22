#include <stdio.h>
#define N 10

void reverse(int n[]);
int main(int argc, char **argv)
{
    int s[N];
    int i = 0;
    while(i < N)
	{
		scanf("%d", &s[i]);
		i++;
	}
    reverse(s);
    return 0;
}
void reverse(int n[])
{
	for(int i = 0; i < (N/4); i++)
	{
		int b = 0;
		b = n[i];
		n[i] = n[(N/2)-i-1];
		n[(N/2)-i-1] = b;
	}
	for(int i = 0; i < (N/4); i++)
	{
		int b = 0;
		b = n[i+N/2];
		n[i+N/2] = n[(N)-i-1];
		n[(N)-i-1] = b;
	}
	for(int i = 0; i < N; i++)
	{
		printf("%d ", n[i]);
	}
}
