#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#define NUM_STRINGS 1048576

typedef struct {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int temperature;
} sensor; // Структура для одного измерния

typedef struct {
    int sum_month_temp;
    int min_month_temp;
    int max_month_temp;
} stat_month; // Структура для подведения месячной статистики

typedef struct {
    int sum_year_temp;
    int min_year_temp;
    int max_year_temp;
} stat_year; // Структура для подведения годовой стастистики

int read_csv(FILE* my_file_in, sensor* data);//Заполняет массив структур данными, вычисляет количество записанный строк
void print_data(sensor* data); //Печатает прочитанные данные в терминал
void sum_max_min_month(sensor* input, stat_month* output, int* count, uint8_t chose_month); // Функция обработки статистики за месяц (сумма, минимальное и максимальное значение)
void sum_max_min_year(sensor* input, stat_year* output);  // Функция обработки статистики за год (сумма, минимальное и максимальное значение)