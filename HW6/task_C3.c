#include <stdio.h>

int middle(int a, int b);
int main(int argc, char **argv)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", middle(a,b));
	return 0;
}
int middle(int a, int b)
{
	if ((a >= 0) && (b >= 0))
		return (a+b)/2;
	else 
		return 0;
}