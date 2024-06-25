#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,z,q,k, min;
	scanf("%d %d %d %d %d", &x, &y ,&z ,&q , &k);
    int a[5] = {x, y , z, q ,k};
    min = a[0];
    for (int i = 0; i<=4; i++)
    {
        if (min>a[i])
        {
        min = a[i];
        }
    }

    printf("%d", min);
	return 0;
}
