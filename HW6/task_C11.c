#include <stdio.h>

int nod(int a, int b);
int main(int argc, char **argv)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", nod(a, b));
	return 0;
}

int nod(int a, int b)
{
    int out = 0;
    int min = 0;
    if (a >= b)
        min = b;
    else 
        min = a;
    for(int i = min; i >= 1; i--)
        {
            if ((a % i == 0) && (b % i == 0))
            {
                out = i;
                break;
            }
        }
    return out;
}

