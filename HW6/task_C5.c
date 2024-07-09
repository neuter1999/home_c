#include <stdio.h>

int sum_n(int n);
int main(int argc, char **argv)
{
	int n;
    scanf("%d", &n);
    printf("%d", sum_n(n));
	return 0;
}
int sum_n(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum = sum + i;
    return sum;
}