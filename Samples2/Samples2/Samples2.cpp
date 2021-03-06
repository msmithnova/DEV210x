// Samples2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int Sum(int x, int y)
{
	return x + y;
}

int Sum(int x, int y, int z)
{
	return x + y + z;
}

inline void swap(int & a, int & b)
{
	int temp = a;
	a = b;
	b = temp;
}

//Declaring a Class
class Rectangle
{
public:
	int _width;
	int _height;
};

int main()
{
	cout << Sum(3, 5) << endl;
	cout << Sum(3, 4, 5) << endl;

	int arr[] = { 4, 5 };
	swap(arr[0], arr[1]);
	cout << arr[0] << ", " << arr[1] << endl;

	Rectangle outer;
	Rectangle inner;
	outer._width = 10;
	outer._height = 10;
	inner._width = 5;
	inner._height = 5;



    return 0;
}
