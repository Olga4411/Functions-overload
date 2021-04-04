#include <iostream>
using namespace std;
#define tab "\t"
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(char arr[], const int n);
void Print(int arr[], const int n);
void Print(float arr[], const int n);
void Print(double arr[], const int n);

void ShiftLeft(char arr[], const int n, int number_of_shifts);
void ShiftLeft(int arr[], const int n, int number_of_shifts);
void ShiftLeft(float arr[], const int n, int number_of_shifts);
void ShiftLeft(double arr[], const int n, int number_of_shifts);



int Sum(int arr[], const int n);
float Sum(float arr[], const int n);
double Sum(double arr[], const int n);


double Avg(int arr[], const int n);
double Avg(float arr[], const int n);
double Avg(double arr[], const int n);


char MinValueIn(char arr[], const int n);
int MinValueIn(int arr[], const int n);
float MinValueIn(float arr[], const int n);
double MinValueIn(double arr[], const int n);

char MaxValueIn(char arr[], const int n);
int MaxValueIn(int arr[], const int n);
float MaxValueIn(float arr[], const int n);
double MaxValueIn(double arr[], const int n);

void Sort(char arr[], const int n);
void Sort(int arr[], const int n);
void Sort(float arr[], const int n);
void Sort(double arr[], const int n);

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
		arr[i] = rand() %(maxRand - minRand) + minRand;
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

void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void ShiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)//���� ���� �������� ������ �� number_of_shifts ���������
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;// � ����� ������� ��������� �������
	}
}

void ShiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)//���� ���� �������� ������ �� number_of_shifts ���������
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;// � ����� ������� ��������� �������
	}
}
void ShiftLeft(float arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)//���� ���� �������� ������ �� number_of_shifts ���������
	{
		float buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;// � ����� ������� ��������� �������
	}
}
void ShiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)//���� ���� �������� ������ �� number_of_shifts ���������
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;// � ����� ������� ��������� �������
	}
}


int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		return (double)Sum(arr, n) / n;
	}
}
double Avg(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		return (double)Sum(arr, n) / n;
	}
}
double Avg(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		return Sum(arr, n) / n;
	}
}
int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
char MinValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

float MinValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		return max;
	}
}
double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		return max;
	}
}
char MaxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		return max;
	}
}
float MaxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		return max;
	}
}
void Sort(int arr[], const int n)// ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			// ������� j ���������� ��������� �������� ������ ����� �������
			// ������� � ������� ��������
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)// ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			// ������� j ���������� ��������� �������� ������ ����� �������
			// ������� � ������� ��������
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)// ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			// ������� j ���������� ��������� �������� ������ ����� �������
			// ������� � ������� ��������
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(float arr[], const int n)// ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			// ������� j ���������� ��������� �������� ������ ����� �������
			// ������� � ������� ��������
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
