#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Rus");
	printf("Задача 1. Сумма трех чисел\n");
	task1();
	sleep(1);
	printf("Задача 2. Сумма и произведение трех чисел\n");
	task2();
	sleep(1);
	printf("Задача 3. Разность двух чисел\n");
	task3();
	sleep(1);
	printf("Задача 4. Найти среднее арифметическое цифр четырехзначного числа\n");
	task4();
	return 0;
}

task1(){
	int n1, n2, n3;
    int sum;
	printf("Введите три числа разделяя их пробелом\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    sum = n1 + n2 + n3;
    printf("Сумма чисел %d %d %d равна : %d\n\n", n1, n2, n3, sum);
	return;
}

task2(){
	int n1, n2, n3;
    int sum;
	int mult;
	printf("Введите три числа разделяя их пробелом\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    sum = n1 + n2 + n3;
	mult = n1 * n2 * n3;
    printf("Сумма чисел %d %d %d равна : %d\n", n1, n2, n3, sum);
	printf("Произведение чисел %d %d %d равна : %d\n\n", n1, n2, n3, mult);
	return;
}

task3(){
	int n1, n2, diff;
	printf("Введите два числа разделяя их пробелом\n");
	scanf("%d %d", &n1, &n2);
	diff = n1 - n2;
	printf("Разность чисел %d %d равна : %d\n", n1, n2, diff);
}

task4(){
	int num, sum, count;
	float average_without_zero, average_with_zero;
	printf("Введите четырехзначное число\n");
	scanf("%d", &num);
	sum = (num/1000) + ((num / 100) % 10) + ((num % 100) / 10) + (num % 10);
	if(num / 1000 != 0){
		count ++;
	}
	if(((num / 100) % 10) != 0){
		count ++;
	}
	if((num % 100) / 10 != 0){
		count ++;
	}
	if(num % 10 != 0){
		count ++;
	}
	average_without_zero = (float)sum/count;
	average_with_zero = (float)sum/4;
	if(count == 4){
		printf("Среднее арифметическое цифр числа : %d равна %.2f\n", num, average_without_zero);
	}
	else{
		printf("Среднее арифметическое цифр числа %d учитывая нули равна : %.2f\n", num, average_with_zero);
		printf("Среднее арифметическое цифр числа %d исключая нули равна : %.2f\n", num, average_without_zero);
	}
	
}