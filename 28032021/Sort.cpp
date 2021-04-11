#include"Sort.h"
template<typename T>void Sort(T arr[], const int n)// Сортировка выбором
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			// счетчик j перебирает остальные элементы правую часть массива
			// перебор с первого элемента
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}