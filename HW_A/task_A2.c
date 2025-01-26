#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned int N;
    unsigned int K;
    unsigned int flag = 0; //флаг наличия 1 в младшем бите
    scanf("%u %u", &N, &K);

    if ((K < 1) && (K > 31))
        printf("Ошибка ввода сдвига");
    for (int i = 0; i < K; i++)
    {
    
        if ((N & 1) == 1)
        {
            flag = 1;
        }
        N = N >> 1;
        
        if (flag == 1)
            N = N^0x80000000;

        flag = 0;
    }
    printf("%u\n", N);
    
    return 0;
}