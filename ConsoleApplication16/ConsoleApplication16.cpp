// ConsoleApplication16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	const int x = 12;
	int a[x];

	for (int i = 0; i < x; i++)
	{
		a[i] = -5 + rand() % 15;
		cout << a[i] << " ";
	}
	cout << endl << endl;

	int min_v = INT_MAX, min, j;
	float sum = 0.0;

	for (int i = 0; i < 9; i++)
	{
		sum += a[i];
	}

	cout << "Summa vseh elementov massiva = " << sum << endl;

	float sra = sum / x;

	cout << "Srednee arifmeti4eskoe = " << sra << endl;
	int n;

	if (sra > 0) n = x * 2 / 3; else n = x * 1 / 3;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{

			if (a[j] < min_v) {
				min_v = a[j];
				min = j;
			}
		}

		a[min] = a[i];
		a[i] = min_v;

		cout << a[i] << " ";

		min_v = INT_MAX;
	}
	cout << "/ ";
	

	for (int i = n; i <x - (x - n) / 2 ; i++) 
	{
		swap(a[i], a[x + n - i - 1]);
	}

	for (int i = n; i < x; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}

