#include "temp_functions.h"

int main(int argc, char *argv[])
{
    uint8_t month = 0; // Переменная для выбора месяца
    FILE *input = 0;
    //// Обработка аргументов командной строки ////
    int flag_error_enter = 0;//Флаг ошибок для завершения программы
    int flag_h = 0;//Флаг выбора инструции пользователем (Программа не выполняется)
    for(int i=0; i<argc; i++)
    {
        if (argc < 2)
            printf("Для получения информации по использованию приложения введите аргумент командной строки -h\n");
        if ((argv[i][0] == '-')&&(argv[i][1] == 'h'))
            {
                printf("Программа предназначена для вывода среднегодовой и ежемесячной статистики температуры.\n");
                printf("Расчёт статистики производится на основе данных полученных с эксель файла (формат csv).\n");
                printf("Эксель таблица с данными должна иметь определнную струтуру (пример данных в папке с программой).\n");
                printf("Файл возможно выбрать используя аргумент командной строки -f (Пример: ./prog.exe -f <имя файла>).\n");
                printf("Для выбора месяца, по которому будет подведена среднемесячная статистика используется аргумент -m (Пример: ./prog.exe -f <имя файла> -m 1).\n");
                printf("Ключи для аргумента -m:\n1 январь\n2 февраль\n3 март\n4 апрель\n5 май\n6 июнь\n7 июль\n8 август\n9 сентябрь\n10 октябрь\n11 ноябрь\n12 декабрь.\n");
                printf("Beta-версия: Последняя компиляция выполнена %s %s.\n", __DATE__, __TIME__) ;
                flag_h = 1;
            }
        if ((argv[i][0] == '-')&&(argv[i][1] == 'f'))
            {
                input = fopen(argv[i+1], "r");
                if (input == NULL)
                {
                    perror("Произошла ошибка открытия файла: ");
                    flag_error_enter = 1;
                }
            }
        if ((argv[i][0] == '-')&&(argv[i][1] == 'm'))
            {
                month = atoi(argv[i+1]);
                if((month < 1)||(month > 12))
                {
                    month = 0;
                    printf("Ввод месяца произведен не верно!!!\n");
                }
            } 
    }
    if(flag_h == 1)
        return 0;
    if(input == 0)
    {
        flag_error_enter = 1;
        printf("Не выбран файл\n");
    }
    if (month == 0)
    {
        printf("Не выбран месяц для вывода ежемесячной статистики\n");
    }
    if (flag_error_enter == 1)
    {
        printf("Программа не выполнена!!!");
        return 0;
    }

    //// Основные вычисления ////
    sensor data; // Массив пустых строк для заполнения
    stat_month out_stat_month = {0,99,-99}; // Переменная по месячной статистике
    stat_year out_stat_year = {0,99,-99}; // Переменная по годовой статистике
    int count = 0; // Дополнительный счетчик для вычисления средней температуры в месяц

    int i = 0;
    for(; i < NUM_STRINGS; i++)
    {
        if((read_csv(input, &data)) < 0)
            break; // Если символы закончились или произошла ошибка чтения
        if (month != 0)
            sum_max_min_month(&data, &out_stat_month, &count, month);
        sum_max_min_year(&data, &out_stat_year);
    }
    if (month != 0)
        out_stat_month.sum_month_temp /= count; // Вычисление среднемесячной температуры
    out_stat_year.sum_year_temp /= i; //Вычисление среднегодовой температуры
    fclose(input);

    //// Вывод информаци ////
    printf("Статистика за год:\n");
    printf("Среднегодовая температура:  %d\n", out_stat_year.sum_year_temp);
    printf("Минимальная температура:    %d\n", out_stat_year.min_year_temp);
    printf("Максимальная температура:   %d\n", out_stat_year.max_year_temp);

    if (month != 0)
    {
        printf("Статистика за ");
        switch (month)
        {
        case 1:
            printf("январь:\n"); 
            break;
        case 2:
            printf("февраль:\n"); 
            break;
        case 3:
            printf("март:\n"); 
            break;
        case 4:
            printf("апрель:\n"); 
            break;
        case 5:
            printf("май:\n"); 
            break;
        case 6:
            printf("июнь:\n"); 
            break;
        case 7:
            printf("июль:\n"); 
            break;
        case 8:
            printf("август:\n"); 
            break;
        case 9:
            printf("сентябрь:\n"); 
            break;
        case 10:
            printf("октябрь:\n"); 
            break;
        case 11:
            printf("ноябрь:\n"); 
            break;
        case 12:
            printf("декабрь:\n"); 
            break;
        }
        printf("Среднемесячная температура: %d\n", out_stat_month.sum_month_temp);
        printf("Минимальная температура:    %d\n", out_stat_month.min_month_temp);
        printf("Максимальная температура:   %d\n", out_stat_month.max_month_temp);
    }
    return 0;
}