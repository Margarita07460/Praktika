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

	//���������� ��������� �������� �� �����������

	printf("������� ���������� ��������� �������: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));
	printf("������ ��������� �����: 'input.txt'\n");
	f = fopen("input.txt", "w");

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() - rand();
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
	printf("��������������� ������: 'output.txt'\n");

	f = fopen("output.txt", "w");

	time_t start = clock();                //����� �� ����������

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
	time_t stop = clock();             //����� ����� ����������
	for (int i = 0; i < size; i++) {
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
	double time = (stop - start) / 1000.0;    //����� ����������
	printf("\n");
	printf("����� ���������� ����������: ");
	printf("%lf\n", time);
	printf("���������� ������������: ");
	printf("%o\n", count);




	//���������� ��������� �������� �� ��������

	printf("������� ���������� ��������� �������: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));

	printf("������ ��������� �����: 'input.txt'\n");
	f = fopen("input.txt", "w");
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() - rand();
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
	printf("\n");

	printf("��������������� ������: 'output.txt'\n");
	f = fopen("output.txt", "w");
	start = clock();                //����� �� ����������

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
	stop = clock();             //����� ����� ����������
	for (int i = 0; i < size; i++) {
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
	time = (stop - start) / 1000.0;    //����� ����������
	printf("\n");
	printf("����� ���������� ����������: ");
	printf("%lf\n", time);
	printf("���������� ������������: ");
	printf("%o\n", count);


	//���������� ������������ �������� �� ��������

	printf("������� ���������� ��������� �������: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));

	printf("������ ��������� �����: 'input.txt'\n");
	array[0] = rand();
	f = fopen("input.txt", "w");
	for (int i = 0; i < size; i++)
	{
		array[i + 1] = array[i] + rand() % 100 + 100;
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
	printf("��������������� ������: 'output.txt'\n");
	f = fopen("output.txt", "w");
	start = clock();                //����� �� ����������

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
	stop = clock();             //����� ����� ����������
	for (int i = 0; i < size; i++) {
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
	time = (stop - start) / 1000.0;    //����� ����������
	printf("\n");
	printf("����� ���������� ����������: ");
	printf("%lf\n", time);
	printf("���������� ������������: ");
	printf("%o\n", count);



	//���������� ������������ �������� �� �����������

	printf("������� ���������� ��������� �������: ");
	scanf("%d", &size);
	printf("\n");
	array = (int*)malloc(size * sizeof(int));

	printf("������ ��������� �����: 'input.txt'\n");
	array[0] = rand();
	f = fopen("input.txt", "w");
	for (int i = 0; i < size; i++)
	{
		array[i + 1] = array[i] + rand() % 100 + 100;
		fprintf(f, "%d  ", array[i]);
	}
	fclose(f);
	printf("��������������� ������: 'output.txt'\n");
	f = fopen("output.txt", "w");

	start = clock();                //����� �� ����������

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
	stop = clock();             //����� ����� ����������
	for (int i = 0; i < size; i++) {
		fprintf(f, "%d  ", array[i]);


	}
	fclose(f);
	time = (stop - start) / 1000.0;    //����� ����������
	printf("\n");
	printf("����� ���������� ����������: ");
	printf("%lf\n", time);
	printf("���������� ������������: ");
	printf("%o\n", count);


}