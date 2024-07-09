#include <stdio.h>

void cap_to_low(void);
int main(int argc, char **argv)
{
    cap_to_low();
	return 0;
}

void cap_to_low(void) // Функция преобразования символа из строчного в заглавный
{
    char a;
    while ((a = getchar()) != '.')
    {
        if ((a >= 97) && (a <= 122)) // согласно таблице ASCII
            a = a - 32;
        printf("%c", a);
    }
}

