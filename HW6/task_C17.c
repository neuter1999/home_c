#include <stdio.h>

void is_happy_number(int n);

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    is_happy_number(n);
	return 0;
}

void is_happy_number(int n)
{
    int figure = 0;
    int sum = 0;
    int mull = 1;
    while(n!=0)
    {
        figure = n % 10;
        n  = n/10;
        sum = sum + figure;
        mull = mull*figure;
    }
    printf("%s", (sum == mull) ? "YES" : "NO");

}

