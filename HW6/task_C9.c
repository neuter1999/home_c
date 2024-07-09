#include <stdio.h>

int factorial(int n);
int main(int argc, char **argv)
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", factorial(n));
	return 0;
}

int factorial(int n) // Функция нахождения факториала
{
    int factorial = 1;
    for(int i = 1; i <= n; i++)
    {
        factorial = i * factorial;
    }
    return factorial;
}

