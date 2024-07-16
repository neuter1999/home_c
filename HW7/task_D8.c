#include <stdio.h>
void print_num(int a, int b);

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    print_num(a, b);
    return 0;
}
void print_num(int a, int b)
{
    if (a >= b)
    {
        printf("%d ", a);
        a--;
        if (a >= b)
            print_num(a, b);
        return;
    }
    if (b >= a)
    {
        printf("%d ", a);
        a++;
        if (b >= a)
            print_num(a, b);
        return;
    }

}