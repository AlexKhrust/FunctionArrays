#pragma once
#include "stdafx.h"
#include "constants.h"

template <typename T>
int Sum(T arr[], const int n);

template <typename T>
int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

//Функции возвращающие сумму элементов одномерного массива//
template <typename T>
int Sum(T arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

//Функции возвращающие сумму элементов двухмерного массива//
template <typename T>
int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
