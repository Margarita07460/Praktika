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

	//Сортировка случайных значений по возрастанию

	printf("Введите количество элементов массива: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() - rand();
		printf("%5d  ", array[i]);
	}


	for (int i = 1; i < size; i++)
	{
		m = array[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (array[j] < m)
				break;
			array[j + 1] = array[j];
			array[j] = m;
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%d  ", array[i]);
	}



	//Сортировка случайных значений по убыванию

	printf("Введите количество элементов массива: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() - rand();
		printf("5%d  ", array[i]);
	}

	for (int i = 1; i < size; i++)
	{
		m = array[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (array[j] > m)
				break;

			array[j + 1] = array[j];
			array[j] = m;
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%5d  ", array[i]);
	}


	//Сортировка возрастающих значений по убыванию

	printf("Введите количество элементов массива: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));

	array[0] = rand();
	for (int i = 0; i < size; i++)
	{
		array[i + 1] = array[i] + rand() % 100 + 100;
		printf("%5d  ", array[i]);
	}

	for (int i = 1; i < size; i++)
	{
		m = array[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (array[j] > m)
				break;

			array[j + 1] = array[j];
			array[j] = m;
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%5d  ", array[i]);
	}


	//Сортировка возрастающих значений по возрастанию

	printf("Введите количество элементов массива: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));

	array[0] = rand();
	for (int i = 0; i < size; i++)
	{
		array[i + 1] = array[i] + rand() % 100 + 100;
		printf("%5d  ", array[i]);
	}

	for (int i = 1; i < size; i++)
	{
		m = array[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (array[j] < m)
				break;

			array[j + 1] = array[j];
			array[j] = m;
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%5d  ", array[i]);

	}

}