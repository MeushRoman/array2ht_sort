// ConsoleApplication16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a[9] = { 4, 7, 0, 20, 17, 11, 1, 18, 10 };

	int min_v = INT_MAX, min, j;

	for (int i = 0; i < 9; i++)
	{
		for ( j = i; j < 9 ; j++)
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
	cout << endl;

	return 0;
}

