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

	FILE* f;
	int m, size;
	int* array;

	//—ортировка случайных значений по возрастанию

	printf("¬ведите количество элементов массива: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));
	printf("ћассив случайных чисел: 'input.txt'\n");
	f = fopen("input.txt", "w");

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() - rand();
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
	printf("ќтсортированный массив: 'output.txt'\n");

	f = fopen("output.txt", "w");

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
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
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

	printf("ћассив случайных чисел: 'input.txt'\n");
	f = fopen("input.txt", "w");
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() - rand();
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
	printf("\n");

	printf("ќтсортированный массив: 'output.txt'\n");
	f = fopen("output.txt", "w");
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
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
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

	printf("ћассив случайных чисел: 'input.txt'\n");
	array[0] = rand();
	f = fopen("input.txt", "w");
	for (int i = 0; i < size; i++)
	{
		array[i + 1] = array[i] + rand() % 100 + 100;
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
	printf("ќтсортированный массив: 'output.txt'\n");
	f = fopen("output.txt", "w");
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
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
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

	printf("ћассив случайных чисел: 'input.txt'\n");
	array[0] = rand();
	f = fopen("input.txt", "w");
	for (int i = 0; i < size; i++)
	{
		array[i + 1] = array[i] + rand() % 100 + 100;
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
	printf("ќтсортированный массив: 'output.txt'\n");
	f = fopen("output.txt", "w");

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
		fprintf(f, "%d  ", array[i]);


	}
	fclose(f);
	time = (stop - start) / 1000.0;    //врем€ сортировки
	printf("\n");
	printf("¬рем€ выполнени€ сортировки: ");
	printf("%lf\n", time);
	printf(" оличество перестановок: ");
	printf("%o\n", count);


}