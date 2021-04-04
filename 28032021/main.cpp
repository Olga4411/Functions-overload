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
	cout << "�ello Functions!" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n, 200, 300);
	Print(arr, n);
	// ����� ������� �� �������� ����� ���������
	int number_of_shifts;
	cout << "������� ���������� �������:"; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "C���� ��������� �������:" << Sum(arr, n) << endl;
	cout << "C������ ��������������" << Avg(arr, n) << endl;
	cout << "����������� ��������" << MinValueIn(arr, n) << endl;
	cout << "������������ ��������" << MaxValueIn(arr, n) << endl;
	cout << "����������:";
	Sort(arr, n);
	Print(arr, n);
	const int m = 8;
	double brr[m];
	FillRand(brr, m, 200, 300);
	Print(brr, m);
	Sort(brr, m);
	cout << "������� ���������� �������:"; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);

	cout << "C���� ��������� �������:" << Sum(brr, m) << endl;
	cout << "C������ ��������������" << Avg(brr, m) << endl;
	cout << "����������� ��������" << MinValueIn(brr, m) << endl;
	cout << "������������ ��������" << MaxValueIn(brr, m) << endl;
	cout << "����������:";
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

	cout << "����� ��������� �������:" << Sum(f_arr, SIZE_FLOAT) << endl;
	cout << "������� �������������� ��������� �������:" << Avg(f_arr, SIZE_FLOAT) << endl;
	cout << "����������� ��������" << MinValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "������������ ��������" << MaxValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "����������:";
	Sort(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);
	cout << "������� ���������� �������:"; cin >> number_of_shifts;
	ShiftLeft(f_arr, SIZE_FLOAT, number_of_shifts);
	Print(f_arr, SIZE_FLOAT);

}




