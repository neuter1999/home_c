#include <stdio.h>

int notation(int n, int p);
int main(int argc, char **argv)
{
	int n, p;
    scanf("%d %d", &n, &p);
    printf("%d", notation(n,p));
	return 0;
}
int notation(int n, int p)
{
    int remains = 0;
    int sum = 0; 
    int multiplier = 1;
    if ((n >= 0) && ((p >= 2) && (p <= 9)))
        {
            while (n > 0)
            {
                remains = multiplier*(n % p);
                sum = sum + remains;
                multiplier = multiplier*10;
                n = n/p;
            }
            return sum;
        }
    return 0;
}