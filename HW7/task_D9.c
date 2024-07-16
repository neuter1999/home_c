#include <stdio.h>
int sum_digits(int n);

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", sum_digits(n));
    return 0;
}
int sum_digits(int n)
{
    int figure;
    static int sum; 
    figure = n % 10;
    n = n / 10;
    sum += figure;
    if (n != 0)
        sum_digits(n);
    return sum;
}