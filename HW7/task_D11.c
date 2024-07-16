#include <stdio.h>
int num_1_in_bin(int num);

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", num_1_in_bin(num));
    return 0;
}

int num_1_in_bin(int num)
{
    int reminder = 0;
    static int sum = 0;
    reminder = num % 2;
    num = num / 2;
    sum += reminder;
    if (num != 0)
        num_1_in_bin(num);
    if (num != 0)
        return sum;
}