#pragma once
class Rational
{
private:
	int numerator;
	int denominator;
public:
	Rational();
	Rational(int, int);
	void setDenominator(int);
	void setNumerator(int);
	int getDenominator();
	int getNumerator();
	void print();
	bool equal(Rational);
	Rational add(Rational);
	Rational add(int num = 1);
private:
	Rational reduction();
	int oklidas(int, int);


	
};

