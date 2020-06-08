#include <stdio.h>
#include <conio.h>
#include <iostream>
struct worker
{
    char name[61];
    char dol[61];
    int zar;
    int year;
};
int main()
{
    setlocale(LC_ALL, "Russian"); //русский язык
    int i=0, n, k = 0;
    printf_s("введите количество работников: "); //help
    scanf_s("%d", &n);
    getchar();
    worker* mas = new worker[n];
    for (int i = 0; i < n; i++)
    {
        mas[i] = worker();
        printf("введите фамилию и инициалы:\n");
        scanf_s("%s", &mas[i].name, 60);
        getchar();
        printf("введите название занимаемой дожности:\n");
        scanf_s("%s", &mas[i].dol, 60);
        getchar();
        printf("введите год поступления на работу: \n");
        scanf_s("%d", &mas[i].year);
        getchar();
    }
    printf("введите стаж работы: \n");
    scanf_s("%d", &k);
    getchar();
    for (int i = 0; i < n; i++)
    {
        if (2020-mas[i].year > k)
        {
            printf("\n %s", mas[i].name, 60);
            printf("\n %s", mas[i].dol, 60);
            printf("\n");

        }
    }
    if (k > 2020 - mas[i].year)
        printf("таких работников нет");
    delete[]mas;
    return 0;
}