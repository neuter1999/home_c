#include <stdio.h>
#include <math.h>

void is_prime(int n);

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    is_prime(n);
	return 0;
}

void is_prime(int n)
{
	int i = 2, flag = 0;
	while (i<= sqrt(n))
	{
		if (n % i == 0)
			flag = 1;
		i++;
	}
    if ((n==1)||(n==0))
        flag = 1;
    printf("%s", (flag == 0) ? "YES" : "NO");
}

