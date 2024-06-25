#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,z,q,k, max, min, sum;
	scanf("%d %d %d %d %d", &x, &y ,&z ,&q , &k);
    int a[5] = {x, y , z, q ,k};
    max = a[0];
    min = a[0];
    for (int i = 0; i<=4; i++)
    {
        if (max<a[i])
        {
        max = a[i];
        }
        if (min>a[i])
        {
        min = a[i];
        }
    }
    sum = max+min;
    printf("%d", sum);
	return 0;
}
