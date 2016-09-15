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

//defines void function ex02
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
	//uses if statements to output whether or not variable numberOf Shares is less than 100
	if (numberOfShares < 100)
		cout << "numberOfShares is less than 100";
	else
		cout << "numberOfShares is not less than 100";
	//prompts user to enter value for boxWidth
	cout << endl << "Enter a box width: ";
	//reads user input into int variable boxWidth
	cin >> boxWidth;
	//prompts user to enter value for bookWidth
	cout << "Enter a book width: ";
	//reads user input into int variable bookWidth
	cin >> bookWidth;
	//uses if statements and modulus function to output whether or not boxWidth is evenly divisible by bookWidth
	if (boxWidth%bookWidth == 0)
		cout << "The box width is evenly divisible by the book width.\n";
	else
		cout << "The box width is not evenly divisible by the book width.\n";
	//prompts user to enter value for chocolateShelfLife
	cout << "Enter the shelf life of a box of chocolate: ";
	//reads user input into int variable chocolateShelfLife
	cin >> chocolateShelfLife;
	//prompts user to enter value for outsideTemp
	cout << endl << "Enter the outside temperature: ";
	//reads user input into int variable outsideTemp
	cin >> outsideTemp;
	//uses if statements to subtract 4 from the value of chocolateShelfLife if the outsideTemp is greater than 90
	if (outsideTemp > 90)
		chocolateShelfLife -= 4;
}

//defines void function ex03
void ex03()
{

}