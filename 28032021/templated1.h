#pragma once
#include <iostream>
using namespace std;
#define tab "\t"

void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

template<typename T>void Print(T arr[], const int n);

template<typename T>void ShiftLeft(T arr[], const int n, int number_of_shifts);

template<typename T>T Sum(T arr[], const int n);

template<typename T>double Avg(T arr[], const int n);

template<typename T>T MinValueIn(T arr[], const int n);

template<typename T>T MaxValueIn(T arr[], const int n);

template<typename T>void Sort(T arr[], const int n);