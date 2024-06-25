#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,z;
	scanf("%d %d %d", &x, &y, &z);
	if ((x>y)&&(x>z)) // Если x наибольшее
    {
        printf("%d", x);
    }
    else if ((y>x)&&(y>z)) // Если y наибольшее
    {
        printf("%d", y);
    }
    else if ((z>x)&&(z>y)) // Если z наибольшее
    {
        printf("%d", z);
    }
    else 
    {
        printf("0");
    }
	return 0;
}
