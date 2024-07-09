#include <stdio.h>

int brackets(char c);
int main(int argc, char **argv)
{
    char c;
    int sum = 0;
    int flag = 0;
    while ((c = getchar()) != '.')
    {
        sum = sum + brackets(c);
        if (sum < 0)
            flag = 1;
    }
    printf("%s", ((sum == 0)&&(flag==0)) ? "YES" : "NO");
	return 0;
}

int brackets(char c)
{
    c = (int)c;
    if (c == 40)
        return 1;
    if (c == 41)
        return -1;
}

