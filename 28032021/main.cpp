#include <iostream>
using namespace std;
#define tab "\t"

#include"FillRand.h"
#include"Print.h"
#include"ShiftLeft.h"
#include"Sort.h"
#include"Statistics.h"

void main()
{
	setlocale(LC_ALL, "");
	cout << "Нello Functions!" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n, 200, 300);
	Print(arr, n);
	// Сдвиг массива на заданное число элементов
	int number_of_shifts;
	cout << "введите количество сдвигов:"; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Cумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Cреднее арифметическое" << Avg(arr, n) << endl;
	cout << "Минимальное значение" << MinValueIn(arr, n) << endl;
	cout << "Максимальнон значение" << MaxValueIn(arr, n) << endl;
	cout << "Сортировка:";
	Sort(arr, n);
	Print(arr, n);
	const int m = 8;
	double brr[m];
	FillRand(brr, m, 200, 300);
	Print(brr, m);
	Sort(brr, m);
	cout << "Введите количество сдвигов:"; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);

	cout << "Cумма элементов массива:" << Sum(brr, m) << endl;
	cout << "Cреднее арифметическое" << Avg(brr, m) << endl;
	cout << "Минимальное значение" << MinValueIn(brr, m) << endl;
	cout << "Максимальнон значение" << MaxValueIn(brr, m) << endl;
	cout << "Сортировка:";
	Sort(brr, m);
	Print(brr, m);
	//
	cout << "CHAR:\n";
	const int SIZE_CHAR = 10;
	char c_arr[SIZE_CHAR];
	FillRand(c_arr, SIZE_CHAR);
	Print(c_arr, SIZE_CHAR);

	cout << "FLOAT:" << endl;
	const int SIZE_FLOAT = 7;
	float f_arr[SIZE_FLOAT];
	FillRand(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);

	cout << "Сумма элементов массива:" << Sum(f_arr, SIZE_FLOAT) << endl;
	cout << "Среднее арифметическое элементов массива:" << Avg(f_arr, SIZE_FLOAT) << endl;
	cout << "Минимальное значение" << MinValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "Максимальное значение" << MaxValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "Сортировка:";
	Sort(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);
	cout << "Введите количество сдвигов:"; cin >> number_of_shifts;
	ShiftLeft(f_arr, SIZE_FLOAT, number_of_shifts);
	Print(f_arr, SIZE_FLOAT);

}




