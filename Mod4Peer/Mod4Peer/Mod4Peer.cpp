// Mod4Peer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int pow(int base, int exp)
{
	if (exp < 0)
	{
		return -1;
	}
	int res = 1;
	if (exp > 0) {
		for (int i = 0; i < exp; i++)
		{
			res *= base;
		}
	}
	return res;
}

double sin(double opposite, double hypoteneuse)
{
	return opposite / hypoteneuse;
}

double avg(int arr[], int size)
{
	int res = 0;
	for (int i = 0; i < size; i++)
	{
		res += arr[i];
	}
	return (double)res / size;
}

int main()
{
	cout << "3 to the power of 5 = " << pow(3, 5) << endl;
	cout << "3 to the power of 0 = " << pow(3, 0) << endl;
	int result = pow(3, -3);
	if (result == -1)
	{
		cout << "Invalid exponent" << endl;
	}
	else
	{
		cout << "3 to the power of -3 = " << pow(3, -3) << endl;
	}

	double sinResult = sin(3.5, 5.5);
	cout << "sin of opposite: 3.5 and hypoteneuse: 5.5 is " << sinResult << endl;

	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[] = { 11, 0, -13, 14, -35, 66, 27 };
	cout << "average of arr1 " << avg(arr1, 6) << endl;
	cout << "average of arr2 " << avg(arr2, 7) << endl;

    return 0;
}

