#include <stdio.h>
#define N 12

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
	for(int i = 0; i < (N/6); i++)
	{
		int b = 0;
		b = n[i];
		n[i] = n[(N/3)-i-1];
		n[(N/3)-i-1] = b;
	}
	for(int i = 0; i < (N/6); i++)
	{
		int b = 0;
		b = n[i+N/3];
		n[i+N/3] = n[(2*(N/3))-i-1];
		n[(2*(N/3))-i-1] = b;
	}
	for(int i = 0; i < (N/6); i++)
	{
		int b = 0;
		b = n[i+(2*(N/3))];
		n[i+(2*(N/3))] = n[N-i-1];
		n[N-i-1] = b;
	}
	for(int i = 0; i < N; i++)
	{
		printf("%d ", n[i]);
	}
}
