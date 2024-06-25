#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y;
	scanf("%d %d", &x, &y);
	if (x>y) // Если х больше у
    {
        printf("Above");
    }
    else if (x<y) // Если х меньше у
    {
        printf("Less");
    }
    else // в противном случае 
    {
        printf("Equal");
    }
	return 0;
}