#include <stdio.h>
void reverse_string();

int main()
{
    reverse_string();
    return 0;
}


void reverse_string()
{
    char a;
    scanf("%c", &a);
    if (a != '.')
        reverse_string();
    if (a != '.') // Добавил еще одно условие чтобы не было точки не совсем понимаю, как по другому решить проблему
        printf("%c", a);
}