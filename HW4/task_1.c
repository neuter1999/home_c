#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y;
	scanf("%d %d", &x, &y);
	if (x>y) // Если х больше у, то выводим сначала у потом х
    {
        printf("%d %d", y, x);
    }
    else // в противном случае наоборот
    {
        printf("%d %d", x, y);
    }
	return 0;
}
