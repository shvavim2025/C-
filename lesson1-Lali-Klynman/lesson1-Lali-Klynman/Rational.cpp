#include "Rational.h"
#include <iostream>
using namespace std;
Rational::Rational() {
	this->numerator = 1;
	this->denominator = 1;
}
Rational::Rational(int numerator,int denominator) {
	setDenominator(denominator);
	this->numerator = numerator;
}
void Rational::setDenominator(int denominator) {
	if (denominator == 0)
		this->denominator = 1;
	else
		this->denominator = denominator;

}
void Rational::setNumerator(int numerator) {
	this->numerator = numerator;
}
int Rational::getNumerator() {
	return numerator;
}
int Rational::getDenominator() {
	return denominator;
}
void Rational::print() {
	cout << numerator << "/" << denominator << endl;
}
bool Rational::equal(Rational other) {
	if ((numerator == other.numerator && denominator == other.denominator)
		|| (numerator + other.numerator == 0 && denominator + other.denominator == 0))
		return true;
	return false;

}
Rational Rational::add(Rational other) {
	Rational res =  Rational(other.numerator * denominator + numerator * other.denominator, denominator * other.denominator);
	return res.reduction();
}
Rational Rational::add(int num) {
	Rational res = Rational(num * denominator + numerator, denominator);
	return res.reduction();
}
int Rational::oklidas(int a, int b) {
	if (b == 0)return a;
	oklidas(b, a % b);
}
Rational Rational::reduction() {
	int divider = oklidas(numerator, denominator);
	return  Rational(numerator / abs(divider), denominator / abs(divider));
}