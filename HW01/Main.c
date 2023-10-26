// Домашнее задание №1
// Задание 1. Вывести на экран “Hello world!”
// Задание 2. Вывести на экран текст "лесенкой"
// Let’s
//      go
//          to walk
// Задание 3. Вывести на экран рисунок из букв
//    *
//   ***
//  *****
// *******
//  HH HH
//  ZZZZZ
// Задание 4*. Нарисовать соты
//   __    __
//  /  \__/  \
//  \__/  \__/
//  /  \__/  \
//  \__/  \__/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    task1();
    sleep(1);
    task2();
    sleep(1);
    task3();
    sleep(1);
    task4();
    return 0;
}
task1()
{
    printf("Hello world!\n");
    return;
}
task2()
{
    char *ts2[] = {"Let's", "go", "to walk", NULL};
    for (int i = 0; ts2[i]; i++)
    {
        if (i == 0)
        {
            printf("%s\n", ts2[i]);
        }
        else if (i == 1)
        {
            printf("\t%s\n", ts2[i]);
        }
        else
        {
            printf("\t\t%s\n", ts2[i]);
            break;
        }
    }
    return;
}
task3()
{
    char * ts3[] = {"   *   ",
                   "  ***  ",
                   " ***** ",
                   "*******",
                   " HH HH ",
                   " ZZZZZ ",
                   NULL};
    for (int j = 0; ts3[j]; j++){
        printf("%s\n", ts3[j]);
    }
    return;
}
task4()
{
    char * ts4[] = 
                   {" __    __",
                   "/  \\__/  \\",
                   "\\__/  \\__/",
                   "/  \\__/  \\",
                   "\\__/  \\__/",
                   NULL};
    for (int i = 0; ts4[i]; i++){
        printf("%s\n", ts4[i]);
    }
    return;
}