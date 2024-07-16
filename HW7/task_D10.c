#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%s", (is_prime(n) == 1) ? "YES" : "NO");
    return 0;
}

int is_prime(int n)
{
    static int i = 2;
    static int flag = 0;
    if (n % i == 0)
		flag = 1;
    i++;
    if (i<= sqrt(n))
        is_prime(n);
    if (((flag == 1)||(n==1))&&(n!=2))
        return 0;
    else 
        return 1;
}