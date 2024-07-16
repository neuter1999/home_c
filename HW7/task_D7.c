#include <stdio.h>
void print_num(int num);

int main()
{
    int num = 0;
    scanf("%d", &num);
    print_num(num);
    return 0;
}


void print_num(int num)
{
    printf("%d ", num);
    num--;
    if (num >= 1)
        print_num(num);
}