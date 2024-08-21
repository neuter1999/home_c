#include "temp_functions.h"

int read_csv(FILE* my_file_in, sensor* data)///Заполняет массив структур данными, вычисляет количество записанный строк
{
    return fscanf(my_file_in,"%u;%u;%u;%u;%u;%d", &(data->year), &(data->month), &(data->day), &(data->hour), &(data->minute), &(data->temperature));//Считывание строки
}

void print_data(sensor* data)//Печатает структуру в терминал
{
    printf("%u;%u;%u;%u;%u;%d \n", data->year, data->month, data->day, data->hour, data->minute, data->temperature);//Печать данных CSV    
}

void sum_max_min_month(sensor* input, stat_month* output, int* count, uint8_t chose_month) // Функция обработки статистики за месяц (сумма, минимальное и максимальное значение)
{

    if ((input->month) == chose_month)// Выбор конкретного месяца
    {
        if((input->temperature) > (output->max_month_temp))
            output->max_month_temp = input->temperature;// Вычисление максимального значения
        if((input->temperature) < (output->min_month_temp))
            output->min_month_temp = input->temperature;// Вычисление минимального  значения
        output->sum_month_temp = output->sum_month_temp + input->temperature; // Вычисление суммы температур за месяц
        (*count)++;// счетчик для нахождения среднемесячной температуры
    }
}

void sum_max_min_year(sensor* input, stat_year* output) // Функция обработки статистики за год (сумма, минимальное и максимальное значение)
{
    if((input->temperature) > (output->max_year_temp))
        output->max_year_temp = input->temperature;// Вычисление максимального значения
    if((input->temperature) < (output->min_year_temp))
        output->min_year_temp = input->temperature;// Вычисление минимального  значения
    output->sum_year_temp = output->sum_year_temp + input->temperature; // Вычисление суммы температур за год
}
