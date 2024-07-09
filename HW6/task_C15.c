#include <stdio.h>

void grow_up(int n);

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    grow_up(n);
	return 0;
}

void grow_up(int n)
{
    int figure = 0;
    int bufer = 10;
    int flag = 1;
    while(n!=0)
    {
        figure = n % 10;
        n  = n/10;
        if (bufer <= figure)
            flag = 0;
        bufer = figure;
    }
    printf("%s", (flag == 1) ? "YES" : "NO");
}

