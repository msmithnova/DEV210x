// Samples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//std::cout << "Hello World!" << std::endl;

	//int myVar = 0;
	//int yourVar{ 1 };

	//double const PI{ 3.1415 };
	//const bool learningIsFun{ true };

	//int myInt = 12;
	//long myLong;
	//myLong = myInt;
	//myLong = (long)myInt;
	//// or you can use this version as well
	//myLong = long(myInt);

	//char ch;
	//int i = 65;
	//float f = 2.5;
	//double dbl;
	//ch = static_cast<char>(i);   // int to char
	//dbl = static_cast<double>(f);   // float to double

	//int arrayName[10];
	//int arrayName2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	////You can also declare an array and only initialize some of the elements :
	//int arrayName3[10] = { 1, 2, 3 };
	//int number = arrayName2[2];
	//int nums[] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	////Iterating Over an Array 
	//int oldNumbers[] = { 1, 2, 3, 4, 5 };
	//for (int i = 0; i < 5; i++)
	//{
	//	int number = oldNumbers[i];
	//}

	//char isAString[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	//char isNotAString[5] = { 'H', 'e', 'l', 'l', 'o' };
	//cout << isAString << endl;
	//cout << isNotAString << endl;
	//char isAlsoAString[6] = "Hello";
	//char isAnotherString[] = "Array size is inferred";
	//string myString = "Hello!";
	//std::string myNewString = "Less typing";

	//struct coffeeBean
	//{
	//	string name;
	//	string country;
	//	int strength;
	//};

	//coffeeBean myBean = { "Strata", "Columbia", 10 };
	//coffeeBean newBean;
	//newBean.name = "Flora";
	//newBean.country = "Mexico";
	//newBean.strength = 9;
	//cout << "Coffee bean " + newBean.name + " is from " + newBean.country << endl;

	//union numericUnion
	//{
	//	int intValue;
	//	long longValue;
	//	double doubleValue;
	//};
	//numericUnion myUnion;
	//myUnion.intValue = 3;
	//cout << myUnion.intValue << endl;
	//myUnion.doubleValue = 4.5;
	//cout << myUnion.doubleValue << endl;
	//cout << myUnion.intValue; cout << endl; //not 3 anymore

	////enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

	//enum Day { Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
	//Day payDay;
	//payDay = Thursday;
	//cout << payDay << endl;

	//char response = 'y';
	//if (response == 'y' || response == 'Y')
	//{
	//	cout << "Positive response received" << endl;
	//}

	//string resp;
	//if (resp == "connection_failed")
	//{
	//	// Block of code executes if the value of the response variable is "connection_failed".
	//}
	//else if (resp == "connection_error")
	//{
	//	// Block of code executes if the value of the response variable is "connection_error".
	//}
	//else
	//{
	//	// Block of code executes if the value of the response variable is neither above responses.
	//}

	//char response1 = 'y';
	//switch (response1)
	//{
	//case 'y':
	//	// Block of code executes if the value of response is y.
	//	break;
	//case 'Y':
	//	// Block of code executes if the value of response is Y.
	//	break;
	//case 'n':
	//	// Block of code executes if the value of response is n.
	//	break;
	//default:
	//	// Block executes if none of the above conditions are met.
	//	break;
	//}

	//int num1 = 1, num2 = 2;
	//cout << (num1 > num2 ? num1 : num2) << " is greater." << endl;

	//for (int i = 0; i < 10; i++)
	//{
	//	// Code to execute.
	//}

	//string response2;
	//cout << "Enter menu choice " << endl << "More" << endl << "Quit" << endl;
	//cin >> response2;

	//while (response2 != "Quit")
	//{
	//	// Code to execute if Quit is not entered

	//	// Prompt user again with menu choices until Quit is entered
	//	cout << "Enter menu choice " << endl << "More" << endl << "Quit" << endl;
	//	cin >> response2;
	//}

	//string response3;

	//do
	//{
	//	cout << "Enter menu choice " << endl << "More" << endl << "Quit" << endl;
	//	cin >> response3;

	//	// Process the data.

	//} while (response3 != "Quit");

	/*bool alternate = true;

	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			if (alternate)
			{
				cout << "X ";
				cout << "O ";

			}
			else
			{
				cout << "O ";
				cout << "X ";

			}
		}
		alternate = !alternate;

		cout << endl;
	}

	int base = 3;
	int exp = 5;
	int res = 1;
	for (int i = 0; i < exp; i++) {
		res *= base;
	}
	cout << res << endl;

	char check = 'y';
	switch (check)
	{
	case 'y':
		cout << "You chose y or Y" << endl;
		break;
	case 'Y':
		cout << "You chose y or Y" << endl;
		break;
	case 'n':
		cout << "You chose n or N" << endl;
		break;
	case 'N':
		cout << "You chose n or N" << endl;
		break;
	default:
		cout << "You didn't choose a valid option" << endl;
		break;
	}*/

    return 0;
}

