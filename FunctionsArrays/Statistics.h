#pragma once
#include "stdafx.h"
#include "constants.h"
#include "Sum.h"

template <typename T>
double Avg(T arr[], const int n)
{
	return (double) Sum(arr, n) / n;
}

template <typename T>
int minValueIn(T arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

template <typename T>
int maxValueIn(T arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

template <typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

template <typename T>
void shiftRight(T arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}

template <typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i] - âûáðàííûé ýëåìåíò, â êîòîðûé ìû õîòèì ïîìåñòèòü ìèíèìàëüíîå çíà÷åíèå
			//arr[j] - ïåðåáèðàåìûé ýëåìåíò
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}