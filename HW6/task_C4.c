#include <stdio.h>

int func(int x);
int main(int argc, char **argv)
{
	int x, max;
    while (scanf("%d", &x) && x != 0)
    {
        if (func(x) > max)
        {
            max = func(x);
        }
    }
    printf("%d", max);
	return 0;
}
int func(int x)
{
	if ((x >= -2) && (x < 2))
		return x*x;
	if (x >= 2)
		return x*x+4*x+5;
	if (x < -2)
		return 4;
}