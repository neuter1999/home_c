#include <stdio.h>

int digit_to_num(char c);
int main(int argc, char **argv)
{
    char c;
    int sum = 0;
    while ((c = getchar()) != '.')
    {
        sum = sum + digit_to_num(c);
    }
    printf("%d", sum);
	return 0;
}

int digit_to_num(char c)
{
    c = (int)c;
    if ((c >= 48) && (c <= 57)) // согласно таблице ASCII
        {
            c -= 48;
            return c;
        }
    else 
        return 0;
}

