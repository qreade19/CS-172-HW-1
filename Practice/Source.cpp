using namespace std;
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

void ex02();
void ex03();
void ex04();
void ex05();
int extraEx04(int i);
int add(int i1, int i2);
int arrayValues(double num[], int arrayNum);
int arrayCheck(double num[], int arrayNum);
void add1(int& i)
{
	int sum = i + 1;
	cout << "Here's your number back, plus one: " << sum << endl;
}

int main()
{
	ex05();
	return 0;
}

void ex02()
{
	int numberOfShares;
	int boxWidth;
	int bookWidth;
	int shelfLife;
	int temp;
	srand(time(0));
	int x = rand();
	int y = rand();
	if (x >= y){
		cout << "x is >= y" << endl;
	}
	else {
		cout << "y is greater than x" << endl;
	}
	cout << endl;
	bool hasPassedTest = true;
	cout << "Please enter the number of shares your last Facebook post got: ";
	cin >> numberOfShares;
	if (numberOfShares < 100) {
		cout << "Ouch. Under 100? Too bad." << endl;
	}
	else {
		cout << "Over 100! Nicely done." << endl;
	}
	cout << endl;
	cout << "Enter the width of a box: ";
	cin >> boxWidth;
	cout << "Enter the width of a book: ";
	cin >> bookWidth;
	if (boxWidth % bookWidth == 0) {
		cout << "Nice. The box width divides by the book width evenly." << endl;
	}
	cout << endl;
	cout << "Please enter the shelf life of a box of chocolates: ";
	cin >> shelfLife;
	cout << "Please enter the temperature outside: ";
	cin >> temp;
	if (temp > 90) {
		int newShelfLife = shelfLife - 4;
		cout << "The new shelf life of that box of chocolates is " << newShelfLife << "." << endl;
	}
	else {
		cout << "The shelf life of the box of chocolates remains the same." << endl;
	}
	cout << endl;
}

void ex03()
{
	char answer;
	char tab = '\\t';
	string mailingAddress;
	string empty = "";
	double aSquare;
	cout << "Please enter the area of a square: ";
	cin >> aSquare;
	double squareSide = sqrt(aSquare);
	double squareDiagonal = sqrt(2*(squareSide * squareSide));
	cout << "The diagonal of the square is " << squareDiagonal << "." << endl;
	cout << endl;
	cout << "Do you like music? (y/n) ";
	cin >> answer;
	if (answer == 'y') {
		cout << "Yes!" << endl;
	}
	else if (answer == 'n') {
		cout << "No..." << endl;
	}
	else {
		cout << "That's not...whatever. Next question." << endl;
	}
	cout << endl;
	cout << "Please enter your mailing adress: ";
	cin >> mailingAddress;
}

void ex04()
{
	srand(time(0));
	int x = rand();
	int y = rand();
	int choice = 0;
	int added;
	int loopNumber = 1;
	while (choice < 1 || choice > 10) {
		cout << "Please enter a number between 1 and 10: ";
		cin >> choice;
		if (choice < 1 || choice > 10)
			cout << "Wrong answer. Let's try this again:" << endl;
	}
	for (int i = 1; i <= choice; i++)
	{
		int cubed = i*i*i;
		cout << i << " cubed is equal to " << cubed << "." << endl;
	}
	cout << endl;
	do {
		for (int i = 0; i < loopNumber; i++)
		{
			cout << "*";
		}
		loopNumber++;
		cout << endl;
	} while (loopNumber <= choice);
	cout << endl;
	cout << "These are the even numbers from 0 to 40:" << endl;
	for (int i = 0; i <= 40; i++)
	{
		if (i % 2 == 0)
			cout << i << ",";
	}
	cout << endl;
	cout << endl;
	extraEx04(choice);
	cout << endl;
	add(x, y);
	cout << endl;
	cout << "Enter any number: ";
	cin >> added;
	add1(added);
}

void ex05()
{
	const int ARRAY_NUMBERS = 5;
	double arrays[ARRAY_NUMBERS];
	double sum = 0;
	double product = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Enter any number: ";
		cin >> arrays[i];
		sum += arrays[i];
		product *= arrays[i];
	}
	cout << "The sum of all these numbers is: " << sum << "." << endl;
	cout << "The product of all these numbers is: " << product << "." << endl;
	arrayValues(arrays, ARRAY_NUMBERS);
	arrayCheck(arrays, ARRAY_NUMBERS);
}

int extraEx04(int i)
{
	int doubled = i * 2;
	cout << "The previous choice doubled is: " << doubled << endl;
	return doubled;
}

int add(int i1, int i2)
{
	int sum = i1 + i2;
	cout << i1 << " plus " << i2 << " equals " << sum << "." << endl;
	return sum;
}

int arrayValues(double num[], int arrayNum)
{
	cout << "The numbers put into the array are: " << endl;
	for (int i = 0; i < arrayNum; i++) {
		cout << num[i] << ", ";
	}
	return arrayNum;
}

int arrayCheck(double num[], int arrayNum)
{
	int numToCheck;
	cout << "Enter any number: ";
	cin >> numToCheck;
	double currentNum;
	int i;
	do {
		currentNum = num[i];
		i++;
	} while (currentNum != numToCheck || i < arrayNum);
	if (currentNum == numToCheck)
		cout << "That number is currently in your array." << endl;
	else
		cout << "Sorry, that number's not in your array." << endl;
	return numToCheck;
}
