#include <stdio.h>

unsigned long long num_corn(int n);
int main(int argc, char **argv)
{
	int n;
    scanf("%d", &n);
    printf("%llu", num_corn(n));
	return 0;
}
unsigned long long num_corn(int n)
{
    unsigned long long out = 1;
    if ((n >= 1) && (n <= 64))
        {
            for (int i = 1; i < n; i++)
            {
                out = out * 2;
            }
        return out;
        }
    return 0;
}