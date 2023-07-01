#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int m, size;
	int* array;

	//—ортировка случайных значений по возрастанию

	printf("¬ведите количество элементов массива: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() - rand();
		printf("%5d  ", array[i]);
	}
	printf("\n");

	time_t start = clock();                //врем€ до сортировки

	long count = 0;
	for (int i = 1; i < size; i++)
	{
		m = array[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (array[j] < m)
				break;
			array[j + 1] = array[j];
			array[j] = m;
			count++;
		}
	}
	time_t stop = clock();             //врем€ после сортировки
	for (int i = 0; i < size; i++) {
		printf("%d  ", array[i]);
	}

	double time = (stop - start) / 1000.0;    //врем€ сортировки
	printf("\n");
	printf("¬рем€ выполнени€ сортировки: ");
	printf("%lf\n", time);
	printf(" оличество перестановок: ");
	printf("%o\n", count);




	//—ортировка случайных значений по убыванию

	printf("¬ведите количество элементов массива: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() - rand();
		printf("5%d  ", array[i]);
	}
	printf("\n");

	start = clock();                //врем€ до сортировки

	count = 0;
	for (int i = 1; i < size; i++)
	{
		m = array[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (array[j] > m)
				break;

			array[j + 1] = array[j];
			array[j] = m;
			count++;
		}
	}
	stop = clock();             //врем€ после сортировки
	for (int i = 0; i < size; i++) {
		printf("%5d  ", array[i]);
	}
	time = (stop - start) / 1000.0;    //врем€ сортировки
	printf("\n");
	printf("¬рем€ выполнени€ сортировки: ");
	printf("%lf\n", time);
	printf(" оличество перестановок: ");
	printf("%o\n", count);


	//—ортировка возрастающих значений по убыванию

	printf("¬ведите количество элементов массива: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));

	array[0] = rand();
	for (int i = 0; i < size; i++)
	{
		array[i + 1] = array[i] + rand() % 100 + 100;
		printf("%5d  ", array[i]);
	}
	printf("\n");

	start = clock();                //врем€ до сортировки

	count = 0;
	for (int i = 1; i < size; i++)
	{
		m = array[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (array[j] > m)
				break;

			array[j + 1] = array[j];
			array[j] = m;
			count++;
		}
	}
	stop = clock();             //врем€ после сортировки
	for (int i = 0; i < size; i++) {
		printf("%5d  ", array[i]);
	}
	time = (stop - start) / 1000.0;    //врем€ сортировки
	printf("\n");
	printf("¬рем€ выполнени€ сортировки: ");
	printf("%lf\n", time);
	printf(" оличество перестановок: ");
	printf("%o\n", count);



	//—ортировка возрастающих значений по возрастанию

	printf("¬ведите количество элементов массива: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));

	array[0] = rand();
	for (int i = 0; i < size; i++)
	{
		array[i + 1] = array[i] + rand() % 100 + 100;
		printf("%5d  ", array[i]);
	}
	printf("\n");

	start = clock();                //врем€ до сортировки

	count = 0;
	for (int i = 1; i < size; i++)
	{
		m = array[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (array[j] < m)
				break;

			array[j + 1] = array[j];
			array[j] = m;
			count++;
		}
	}
	stop = clock();             //врем€ после сортировки
	for (int i = 0; i < size; i++) {
		printf("%5d  ", array[i]);


	}
	time = (stop - start) / 1000.0;    //врем€ сортировки
	printf("\n");
	printf("¬рем€ выполнени€ сортировки: ");
	printf("%lf\n", time);
	printf(" оличество перестановок: ");
	printf("%o\n", count);


}