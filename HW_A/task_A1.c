#include <stdio.h>
#define NUM 26

int main()
{
    int N;
    char n, p, c;
    scanf("%d", &N);
    while ((c = getchar()) != '.')
    {
        if (c == ' ')
            putchar(c);
        else if (c >= 'a' && c <= 'z')
        {
            n = c - 'a';
            p = (n + N) % NUM;
            putchar(p + 'a');
        }
        else if (c >= 'A' && c <= 'Z')
        {
            n = c - 'A';
            p = (n + N) % NUM;
            putchar(p + 'A');
        }
    }
    putchar('.');
    return 0;
}