#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Rus");
    Task01();
    Task02();
    Task03();
    Task04();
    return 0;
}

int Task01(){
    int n1, n2, n3, n4, n5;
    printf("Введите пять чисел разделяя их пробелом\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    int max = n1 > n2 ? n1 : n2;
    max = max > n3 ? max : n3;
    max = max > n4 ? max : n4;
    max = max > n5 ? max : n5;
    printf("%d %d %d %d %d Максимальное число : %d\n", n1, n2, n3, n4, n5, max);
    return;
}
int Task02(){
    int n1, n2, n3, n4, n5;
    printf("Введите пять чисел разделяя их пробелом\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    int min = n1 < n2 ? n1 : n2;
    min = min < n3 ? min : n3;
    min = min < n4 ? min : n4;
    min = min < n5 ? min : n5;
    printf("%d %d %d %d %d Минимальное число : %d\n", n1, n2, n3, n4, n5, min);
    return;
}

int Task03(){
    int n1, n2, n3;
    printf("Введите три числа разделяя их пробелом\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%s\n", n1 > n2 ? "No" : n2 > n3 ? "No" : "Yes");
    return;
}

int Task04(){
    int n1;
    printf("Введите номер месяца\n");
    scanf("%d", &n1);
    if (0 < n1 && n1 < 13){
        if (2 < n1 && n1 < 6)
        {
            printf("Spring");
        }
        else if (5 < n1 && n1 < 9)
        {
            printf("Summer");
        }
        else if (8 < n1 && n1 < 12)
        {
            printf("Autumn");
        }
        else if (n1 == 12 || 0 < n1 && n1 < 3)
        {
            printf("Winter");
        }
    }
    else
        {
            printf("Совпадений не найдено");
        }
    return;
}
