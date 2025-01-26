#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main()
{
    unsigned int N, OUT;
    unsigned int K;
    unsigned int max_sum = 0;
    unsigned int max_sum_out_for;

    scanf("%u %u", &N, &K);

    if ((K < 1) && (K > 31))
        printf("Ошибка ввода сдвига");
    K--;
    unsigned int pos = 31;
    while(pos >= K)
    {
        if (K == 0) {
            max_sum = 1;
            break;
        }
        max_sum_out_for = 0;
        for(int i = 0; i <= K ; i++)
        {
            if (((1 << (pos-i)) & N) != 0)
            {
                max_sum_out_for += pow(2,K-i);
            }
        }
        if (max_sum_out_for > max_sum)
            max_sum = max_sum_out_for;
        pos--;
    }
    printf("%u \n", max_sum);

    return 0;
}