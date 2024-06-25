#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c; 
	scanf("%d %d %d", &a, &b, &c);
    if (((a+b)>c)&&((a+c)>b)&&((c+b)>a))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}