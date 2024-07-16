#include <stdio.h>
void numbers(int num);

int main()
{
    int num;
    scanf("%d", &num);
    numbers(num);
    return 0;
}

void numbers(int num)
{
    static int counter_1 = 0; // Счетчик цифр
    static int counter_2 = 1; // Счетчик рекурсий
    for ( int i = 1; i <= counter_2 ; i++)
    {
        counter_1++;
        printf("%d ", counter_2);
        if (counter_1 == num )
            break;
    }
    counter_2++;
    if (counter_1 != num )
        numbers(num);
    return;
}