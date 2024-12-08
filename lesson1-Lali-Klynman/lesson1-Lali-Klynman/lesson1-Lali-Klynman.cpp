// lesson1-Lali-Klynman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"Rational.h"
#include <iostream>
using namespace std;
#define N 5
Rational* equalRationals(Rational arr[], int n,Rational r, int& size) {
	size = 0;
	for (int i = 0; i <n; i++)
	{
		if (arr[i].equal(r))
			size++;
	}
	Rational* res = new Rational[size];
	size = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i].equal(r))
			res[size++]=arr[i];
	}
	return res;
}
int main()
{
	int numerator, denominator,size;
	int& i = size;
	char tav;
	cout << "enter two rational numbers:" << endl;
	cin >> numerator >> tav >> denominator;
	Rational r1;
	r1.setNumerator(numerator);
	r1.setDenominator(denominator);
	cin >> numerator >> tav >> denominator;
	Rational r2(numerator, denominator);
	Rational ans = r1.add(r2);
	r1.print();
	cout << "+ ";
	r2.print();
	cout << "= ";
	ans.print();
	cout << endl;
	ans = r1.add(5);
	r1.print();
	cout << "+ 5 = ";
	ans.print();
	cout << endl;
	ans = r1.add();
	r1.print();
	cout << "+ 1 = ";
	ans.print();
	cout << endl;
	if (r1.equal(r2))
		cout << "The two numbers are equal" << endl;
	else
	{
		cout << "The two numbers are different" << endl;
		r1.print();
		r2.print();
		cout << endl;
	}
	
	Rational* arr = new Rational[N];
	Rational* res;
	arr[0].setDenominator(4);
	arr[0].setNumerator(2);
	arr[1].setDenominator(5);
	arr[1].setNumerator(1);
	arr[2].setDenominator(2);
	arr[2].setNumerator(1);
	arr[3].setDenominator(8);
	arr[3].setNumerator(2);
	arr[4].setDenominator(4);
	arr[4].setNumerator(3);
	Rational r3 = Rational(-1, 2);
	res = equalRationals(arr, N, r3, i);
	cout << "the numbers that ewqual---" << endl;
	for (int i = 0; i < size; i++)
	{
		res[i].print();
	}
	delete[] res;
	delete[] arr;





	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
