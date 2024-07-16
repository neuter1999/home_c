#include <stdio.h>
void dec_to_bin(int num);

int main()
{
    int num;
    scanf("%d", &num);
    dec_to_bin(num);
    return 0;
}


void dec_to_bin(int num)
{
    int reminder = 0;
    reminder = num % 2;
    num = num / 2;
    if (num != 0)
        dec_to_bin(num);
    printf("%d", reminder);
}