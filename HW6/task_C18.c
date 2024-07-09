#include <stdio.h>

int is_digit(char c);
int main(int argc, char **argv)
{
    char c;
    int counter_figure = 0;
    while ((c = getchar()) != '.')
    {
        if (is_digit(c) == 1)
            counter_figure++;
    }
    printf("%d", counter_figure);
	return 0;
}

int is_digit(char c)
{
    c = (int)c;
    if ((c >= 48) && (c <= 57)) // согласно таблице ASCII
        return 1;
    else 
        return 0;
}

