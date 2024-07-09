#include <stdio.h>

int module(int a);
int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	printf("%d", module(a));
	return 0;
}
int module(int a)
{
	int b = 0;
	if (a < 0)
		b = a*(-1);
	else
		b = a;	
	return b;
}