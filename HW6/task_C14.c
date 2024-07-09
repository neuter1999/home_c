#include <stdio.h>

void func_14(int x);

int main(int argc, char **argv)
{
    int x;
    scanf("%d", &x);
    func_14(x);
	return 0;
}

void func_14(int x) 
{
    int figure = 0;
    int sum = 0;
    while(x!=0)
    {
        figure = x % 10;
        x  = x/10;
        sum = sum + figure;
    }
    printf("%s", ((sum % 2) == 0) ? "YES" : "NO");

}

