#include <iostream>
#include"templated1.h"
using namespace std;
#define tab "\t"


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
	cout << "������� ���������� �������:"; cin >> number_of_shifts;
	ShiftLeft(f_arr, SIZE_FLOAT, number_of_shifts);
	Print (f_arr, SIZE_FLOAT);
	cout << "����������� ��������" << MinValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "������������ ��������" << MaxValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "����������:";
	Sort(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 256;
	}
	cout << endl;
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	cout << endl;
}
void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
	cout << endl;
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
	cout << endl;
}
template<typename T>void FillRand(T arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 256;
	}
	cout << endl;
}
template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>void ShiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)//���� ���� �������� ������ �� number_of_shifts ���������
	{
		T buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;// � ����� ������� ��������� �������
	}
}
template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>double Avg(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		return (double)Sum(arr, n) / n;
	}
}
template<typename T>T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		return max;
	}
}
template<typename T>void Sort(T arr[], const int n)// ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			// ������� j ���������� ��������� �������� ������ ����� �������
			// ������� � ������� ��������
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}