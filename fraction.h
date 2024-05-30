#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>

static int N_DEC = 4;

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int, int);
	Fraction(double);
	Fraction(char*);

	friend std::ostream& operator << (std::ostream&, const Fraction&);
	friend std::istream& operator >> (std::istream&, Fraction&);
	friend Fraction& operator + (Fraction&, Fraction&);
	friend Fraction& operator + (Fraction&, const int);
	friend Fraction& operator + (const int, Fraction&);
	friend Fraction& operator += (Fraction&, Fraction&);
	friend Fraction& operator += (Fraction&, const int);

	friend Fraction& operator + (Fraction&, const double);
	friend Fraction& operator + (const double, Fraction&);
	friend Fraction& operator += (Fraction&, const double);
	void checkDivisibility();

	int getDenominator();
};

int countDigits(double);
int NOD(int, int);
int NOK(int, int);