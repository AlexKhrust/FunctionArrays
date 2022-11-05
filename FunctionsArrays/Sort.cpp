#include "Sort.h"

void Sort(int arr[], const int n)
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