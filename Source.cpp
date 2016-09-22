// Name: Shayna Snyder
// Date: 9/20/16
// Class: CS-172
// Project: HW1

#include <iostream>
#include <cstdbool>
#include <string>
#include <iomanip>
using namespace std;

//declares void and int functions
void ex02();
void ex03();
void ex04();
void ex05();
int doublesInteger(int a);
int add(int rand1, int rand2);
int passByReference(int a);
void arrayPartC(int matrix[], const int nElements);
void arrayPartD(int matrix[], const int nElements);

int main()
{
	//calls void functions
	ex02();
	ex03();
	ex04();
	ex05();
	return 0;
}

//defines void function ex02
void ex02()
{
	//declares bool variable and initializing it to true
	bool hasPassedTest=true;
	//declares int variables and initializing them to random integers
	int x = rand() % 10;
	int y = rand() % 10;
	int numberOfShares, boxWidth, bookWidth, chocolateShelfLife, outsideTemp;
	//outputs values of int variables x and y
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
	cin >> numberOfShares;
	//uses if statements to output whether or not variable numberOf Shares is less than 100
	if (numberOfShares < 100)
		cout << "numberOfShares is less than 100";
	else
		cout << "numberOfShares is not less than 100";
	//prompts user to enter value for boxWidth
	cout << endl << "Enter a box width: ";
	cin >> boxWidth;
	//prompts user to enter value for bookWidth
	cout << "Enter a book width: ";
	cin >> bookWidth;
	//uses if statements and modulus function to output whether or not boxWidth is evenly divisible by bookWidth
	if (boxWidth%bookWidth == 0)
		cout << "The box width is evenly divisible by the book width.\n";
	else
		cout << "The box width is not evenly divisible by the book width.\n";
	//prompts user to enter value for chocolateShelfLife
	cout << "Enter the shelf life of a box of chocolate: ";
	cin >> chocolateShelfLife;
	//prompts user to enter value for outsideTemp
	cout << "Enter the outside temperature: ";
	cin >> outsideTemp;
	//uses if statements to subtract 4 from the value of chocolateShelfLife if the outsideTemp is greater than 90
	if (outsideTemp > 90)
		chocolateShelfLife -= 4;
	cout << "The shelf life of a box of chocolate is: " << chocolateShelfLife << endl;
}

//defines void function ex03
void ex03()
{
	//declares double variables
	double squareArea, diagonal;
	//declares char variables, and initializes char variable tab to the tab character
	char response, tab = '\t';
	//declares string variable mailingAddress, and initializes emptyString to the empty string
	string mailingAddress, emptyString;
	//prompts user to input the area for a square
	cout << "Area of a square: ";
	cin >> squareArea;
	//calculates length of square diagonal using user-inputted value for squareArea
	diagonal = sqrt(2 * squareArea);
	//outputs length of the square diagonal
	cout << "Square diagonal length: " << diagonal << endl;
	//prompts user for a yes or no response (y or n)
	cout << "Enter 'y' or 'n': ";
	cin >> response;
	//uses if statements to output "yes" or "no" based on user-inputted char variable
	if (response == 'y')
		cout << "yes" << endl;
	else if (response == 'n')
		cout << "no" << endl;
	//prompts user to input string mailingAddress
	cout << "Mailing address: ";
	cin >> mailingAddress;
}

//defines void function ex04
void ex04()
{
	//declares int variables, and initializes sumOfCubes to 0 and asterisk to 1
	int a, n, sumOfCubes = 0, asterisk = 1, even, rand1, rand2;
	//uses do-while loop to ask the user for an a value until valid input is entered
	do
	{
		cout << "Enter a number between 1 and 10: ";
		cin >> a;
	} while (a < 1 || a > 10); //will continue to loop if a value is not between 1 and 10
	//uses for loop to compute the sum of the cubes from 1 to the value of a
	for (n = 0; n <= a; n++)
	{
		//deckares int variable cube, and calculates sumOfCubes
		int cube;
		cube = n*n*n;
		sumOfCubes += cube;
	}
	//outputs the value of sumOfCubes
	cout << sumOfCubes << endl;
	//uses do-while loop to ouput 'a' amount of asterisks
do
{
	asterisk += 1;
	cout << setw(3) << "*";
} while (asterisk <= a); //loop will end when value of asterisk is greater than the value of a
	cout << endl;
	//uses for loop to output the even numbers from 0 to 40
	for (even = 0; even <= 40; even++)
	{
		//if there is no remainder when the value of even is divided by 2, then the value is outputted
		if (even % 2 == 0)
			cout << even << ", ";
	}
	cout << endl;
	//calls int function doublesInteger and outputs return value of function
	cout << "Doubled value of a: " << doublesInteger(a) << endl;
	rand1 = rand() % 100;
	rand2 = rand() % 100;
	//calls int function add and outputs return value of function
	cout << "Sum of " << rand1 << " and " << rand2 << " is: " << add(rand1, rand2) << endl;
	cout << "One plus the function's parameter is: " << passByReference(a) << endl;
}

//defines void function ex05
void ex05()
{
	//declares and initializes int variables
	int arraySum = 0, arrayProduct = 1;
	const int nElements = 5;
	//declares a two-dimensional array
	int matrix[nElements];
	//uses for loop to store user input in the array values
		for (int i = 0; i < nElements; i++)
		{
			cout << "Enter an integer: ";
			cin >> matrix[i];
			//calculates the sum and product of the array values
			arraySum += matrix[i];
			arrayProduct = arrayProduct * matrix[i];
		}
		//outputs sum and product of array values
		cout << "Sum of integers: " << arraySum << endl << "Product of integers: " << arrayProduct << endl;
		//calls void functions arrayPartC  and arrayPartD that take array matrix and int nElements
		arrayPartC(matrix, nElements);
		arrayPartD(matrix, nElements);
}

//defines int function doublesInteger
int doublesInteger(int a)
{
	int doubledValue;
	doubledValue = 2 * a;
	return doubledValue;
}

//defines int function add
int add(int rand1, int rand2)
{
	//sets the value of the int variable sum to the sum of two random integers
	int sum;
	sum = rand1 + rand2;
	return sum;
}

//defines int function passByReference
int passByReference(int a)
{
	a = a + 1;
	return a;
}

//defines void function arrayPartC that takes the array matrix and its size nElements
void arrayPartC(int matrix[], const int nElements)
{
	//uses for loop to output the values in the array
	cout << "The array values are: ";
	for (int i = 0; i < nElements; i++)
		cout << matrix[i] << ", ";
	cout << endl;
}

//defines void function arrayPartD that takes the array matrix and its size nElements
void arrayPartD(int matrix[], const int nElements)
{
	//declares int variables and initializes inArray to 0
	int userValue, inArray = 0;
	//reads user input into int variable userValue
	cout << "Enter a value: ";
	cin >> userValue;
	//uses for loop to test whether or not userValue is in the array
	for (int i = 0; i < nElements; i++)
	{
		//if userValue is equal to a value in the array 1 is added to the value of inArray
		if (userValue = i)
			inArray += 1;
	}
	//if inArray still equals 0 after the loop ends, then userValue is not in the array
	if (inArray = 0)
		cout << "The array does not contain that value." << endl;
	//if inArray does not equal 0, the userValue is in the array
	else
		cout << "The array does contain that value." << endl;
}