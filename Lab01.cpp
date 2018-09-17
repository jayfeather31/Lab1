//Lab01.cpp
//Spencer Romberg
//COSC 2030 Fall 2018
//Lab 01
//September 17th, 2018

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::ifstream;

int main()
{
	int number = 0;                                                 //creates a counter to keep track of numbers in the file
	double c;                                                       //creates a variable to keep track of the second to last number
	double d;                                                       //creates a variable to keep track of the last number
	string file_name;
	ifstream file;
	cout << "Enter the file you wish to process." << endl;          //this here is more for flavor, I could've just added in the name of the file directly without this
	cin >> file_name;
	file.open(file_name);                                           //opens the file
	double a;
	while (file>>a)                                                 //reads each individual number
	{
		if (file.fail())                                            //if the ifstream detects a value that is NOT a double, ignore the value
		{
		}
		else
		{ 
			number++;
			if (number <= 2)
			{ 
				if (number == 1)
				{
					cout << "The first number is: " << a << endl;   //stores first number
				}

				if (number == 2)
				{
					cout << "The second number is: " << a << endl;  //stores second number
				}
			}
			if (number > 2)
			{ 
				if ((number % 2) == 1)                             //stores second to last number
				{
					c = a;
				}

				if ((number % 2) == 0)                             //stores last number
				{
					d = a;
				}
			}
		}
		

	}

	if ((number % 2) == 1)                                         //because c and d assume an even length of numbers, this takes into account whether the list of numbers is even or odd
	{ 
		cout << "The second to last number is: " << d << endl;
		cout << "The last number is: " << c << endl;
	}
	if ((number % 2) == 0)
	{
		cout << "The second to last number is: " << c << endl;
		cout << "The last number is: " << d << endl;
	}
	file.close();                                                  //closes the file

	system("pause");
	return 0;

}