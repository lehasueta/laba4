
#include <stdio.h>
#include <locale.h>

void task16(void)
{
    int A, B, C;

    printf("=== ПОСАДКА СЕМЯН ===\n");

    printf("Введите три параметра почвы A, B, C: ");
    scanf("%d %d %d", &A, &B, &C);

    int condition = (A % 3 == 0) &&
                    (B % 3 == 0) &&
                    (C % 3 == 0);

    if (condition)
        printf("Лунка идеальна для посадки!\n");
    else
        printf("Лунка не подходит для посадки.\n");

    printf("Результат проверки: %d\n", condition);
}

int main(void)
{
    setlocale(LC_ALL, "Russian");

    task16();

    return 0;
}
