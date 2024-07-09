#include <stdio.h>

int power(int n, int p);
int main(int argc, char **argv)
{
	int n, p;
	scanf("%d %d", &n, &p);
	printf("%d", power(n,p));
	return 0;
}
int power(int n, int p)
{
	if (((n <= 1000)||(n >= -1000)) && (p >= 0))
	{
		int out = 1;
		for (int i=0; i < p; i++)
		{
			out = out*n;
		}
		return out;
	}
	else
		return 0;
}