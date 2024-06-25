#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,z,q,k, max;
	scanf("%d %d %d %d %d", &x, &y ,&z ,&q , &k);
    int a[5] = {x, y , z, q ,k};
    max = a[0];
    for (int i = 0; i<=4; i++)
    {
        if (max<a[i])
        {
        max = a[i];
        }
    }
    printf("%d", max);
	return 0;
}
