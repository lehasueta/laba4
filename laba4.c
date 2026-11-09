
#include <stdio.h>
#include <locale.h>

void task1(void) {
    printf("\n===== Задание 1. Ввод и вывод значений разных типов =====\n");

    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("Исходные значения:\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %e\n", d);

    printf("\nВведите символ, целое, вещественное и double:\n");
    scanf(" %c", &c);
    scanf("%d", &i);
    scanf("%f", &f);
    scanf("%lf", &d);

    printf("\nВведённые значения:\n");
    printf("char c = %c (код %d)\n", c, c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %e\n", d);
}

void task1a(void) {
    printf("\n===== Задача 1а. Целая и дробная часть числа =====\n");

    double x;
    printf("Введите вещественное число: ");
    scanf("%lf", &x);

    int whole = (int)x;
    double frac = x - whole;

    printf("Целая часть: %d\n", whole);
    printf("Дробная часть: %f\n", frac);
}

void task1b(void) {
    printf("\n===== Задача 1б. Коды символа =====\n");

    char c;
    printf("Введите символ: ");
    scanf(" %c", &c);

    printf("Символ: %c\n", c);
    printf("Десятичный код: %d\n", c);
    printf("Шестнадцатеричный: %x\n", c);
}

void task1v(void) {
    printf("\n===== Задача 1в. Значение 1/i =====\n");

    int i;
    printf("Введите целое число i: ");
    scanf("%d", &i);

    if (i == 0) {
        printf("Деление на ноль невозможно!\n");
        return;
    }

    double result = 1.0 / i;
    printf("1/%d = %f\n", i, result);
}

void task2(void) {
    printf("\n===== Задание 2. Неявное преобразование типов =====\n");

    int a = 11;
    int b = 3;

    int x;
    float y;
    double z;

    x = a / b;
    y = (float)a / b;
    z = (double)a / b;

    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %lf\n", z);

    printf("\nС явным приведением типа:\n");
    printf("(float)a/b = %f\n", (float)a / b);
    printf("(double)a/b = %lf\n", (double)a / b);
    printf("a/(float)b = %f\n", a / (float)b);
    printf("(float)(a/b) = %f\n", (float)(a / b));
}

void task3(void) {
    printf("\n===== Задание 3. Обработка трёхзначного числа =====\n");

    int n;
    printf("Введите трёхзначное число: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Число не трёхзначное!\n");
        return;
    }

    int last = n % 10;
    int first = n / 100;
    int middle = (n / 10) % 10;
    int sum = first + middle + last;
    int reverse = last * 100 + middle * 10 + first;

    printf("Последняя цифра: %d\n", last);
    printf("Первая цифра: %d\n", first);
    printf("Сумма цифр: %d\n", sum);
    printf("Число наоборот: %d\n", reverse);
}

int main(void) {
    setlocale(LC_CTYPE, "RUS");

    int choice;

    printf("===========================================\n");
    printf(" Лабораторная работа №4\n");
    printf(" Типы данных и преобразование типов\n");
    printf("===========================================\n");
    printf(" 1 - Задание 1 (ввод/вывод разных типов)\n");
    printf(" 2 - Задача 1а (целая и дробная часть)\n");
    printf(" 3 - Задача 1б (коды символа)\n");
    printf(" 4 - Задача 1в (1/i)\n");
    printf(" 5 - Задание 2 (преобразование типов)\n");
    printf(" 6 - Задание 3 (трёхзначное число)\n");
    printf(" 0 - Выход\n");
    printf("===========================================\n");
    printf("Ваш выбор: ");

    scanf("%d", &choice);

    switch (choice) {
    case 1: task1(); break;
    case 2: task1a(); break;
    case 3: task1b(); break;
    case 4: task1v(); break;
    case 5: task2(); break;
    case 6: task3(); break;
    case 0: printf("Выход.\n"); break;
    default: printf("Неверный выбор!\n");
    }

    return 0;
}
