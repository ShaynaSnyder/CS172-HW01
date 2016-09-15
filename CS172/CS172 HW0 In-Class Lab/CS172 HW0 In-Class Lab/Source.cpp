// Name: Shayna Snyder
// Date: 9/13/16
// Class: CS-172
// Project: HW1

#include <iostream>
#include <cstdbool>
using namespace std;

//declaring void functions
void ex02();
void ex03();
int main()
{
	//calling void function
	ex02();
	return 0;
}

void ex02()
{
	//declaring bool variable and initializing it to true
	bool hasPassedTest=true;
	//declaring int variables and initializing them to random integers
	int x = rand() % 10;
	int y = rand() % 10;
	int numberOfShares, boxWidth, bookWidth, chocolateShelfLife, outsideTemp;
	//outputting values of int variables x and y
	cout << "x: " << x << " y: " << y << endl;
	//if statements used to output whether x is greater than, equal to, or less than y
	if (x > y)
		cout << "x is greater than y";
	else if (x == y)
		cout << "x is equal to y";
	else
		cout << "x is less than y";
	//prompts user to enter a value for numberOfShares
	cout << endl << "Number of Shares: ";
	//reads in user input into variable numberOfShares
	cin >> numberOfShares;
	if (numberOfShares < 100)
		cout << "numberOfShares is less than 100";
	else
		cout << "numberOfShares is not less than 100";
	cout << endl << "Enter a box width: ";
	cin >> boxWidth;
	cout << "Enter a book width: ";
	cin >> bookWidth;
	if (boxWidth%bookWidth == 0)
		cout << "The box width is evenly divisible by the book width.\n";
	else
		cout << "The box width is not evenly divisible by the book width.\n";
	cout << "Enter the shelf life of a box of chocolate: ";
	cin >> chocolateShelfLife;
	cout << endl << "Enter the outside temperature: ";
	cin >> outsideTemp;
	if (outsideTemp > 90)
		chocolateShelfLife -= 4;
}

void ex03()
{

}