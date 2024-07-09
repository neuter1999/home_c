#include <stdio.h>

float power(float n, int p);
float factorial(int n);
float cosinus(float x);

int main(int argc, char **argv)
{
    int x;
    scanf("%d", &x);
    printf("%0.3f", cosinus(x));
	return 0;
}

float power(float n, int p)
{
	if (((n <= 1000)||(n >= -1000)) && (p >= 0))
	{
		float out = 1;
		for (int i=0; i < p; i++)
		{
			out = out*n;
		}
		return out;
	}
	else
		return 0;
}

float factorial(int n) // Функция нахождения факториала
{
    float factorial = 1;
    for(int i = 1; i <= n; i++)
    {
        factorial = i * factorial;
    }
    return factorial;
}

float cosinus(float x) 
{
    float out = 0;
    x = (x*3.141)/180;
    for(int i = 0; i <= 3; i++)
        {
            out = out + (power((-1),(i))*power(x, (2*i))/factorial((2*i)));
        }
    return out;
}

