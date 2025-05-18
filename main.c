#include <stdio.h>

// Функция возведения в квадрат
int square(int x)
{
    return x * x;
}

int main()
{
    int a = 5;         // инициализация переменной
    int b = square(a); // вызов функции square
    printf("%d\n", b); // вывод результата в консоль
    return 0;          // успешный завершение
}