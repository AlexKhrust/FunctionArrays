#pragma once
#include "stdafx.h"
#include "Constants.h"

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
string Sum(char arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
string Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
