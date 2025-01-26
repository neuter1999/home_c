#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned int N, OUT;
    unsigned int K;
    unsigned int flag = 0; //флаг наличия 1 в младшем бите
    scanf("%u %u", &N, &K);

    if ((K < 1) && (K > 31))
        printf("Ошибка ввода сдвига");
    for(int i = 0; i < K; i++)
    {
        if(((1<<i)&N)!=0)
            OUT += (1<<i);
    }
    printf("%u\n", OUT);
    
    return 0;
}