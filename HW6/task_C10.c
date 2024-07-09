#include <stdio.h>

void print_simple(int n);
int main(int argc, char **argv)
{
    int n = 0;
    scanf("%d", &n);
    print_simple(n);
	return 0;
}

void print_simple(int n) // Функция печати всех простых множителей числа
{
    int a [8] = {2,3,5,7,11,13,17,19};
    for(int i = 0; i < 8; i++)
    {   
        if ((n % a[i]) == 0)
            {
                printf("%d ", a[i]);
                n = n / a[i];
                if ((n % a[i]) == 0)
                    i--;
            }
        if (n == 1)
            break;
        
    }
}

