#include <iostream>
#include <cmath>
#include <string>
#include <cassert>
#include "Complex.h"
#include "Rational.h"
using namespace std;

//teste Complex
void test_addition()
//Metoda adunarii numerelor complexe va fi testata
{
	Complex nr1 = Complex(-1, -2);
	Complex nr2 = Complex(1, 2);
	Complex rezultat = nr1.addition(nr2);
	if (rezultat.getterReal() == 0 && rezultat.getterImag() == 0)
		cout << "Test ok!"<<endl;
	Complex nr3 = Complex(-1, -2);
	Complex nr4 = Complex(7, 2);
	Complex rezultat2 = nr1.addition(nr2);
	if (rezultat2.getterReal() == 6 && rezultat2.getterImag() == 0)
		cout << "Test ok!"<<endl;
}

void test_mult()
// Metoda inmultirii numerelor complexe va fi testata
{
	Complex nr1 = Complex(-1, -2);
	Complex nr2 = Complex(1, 2);
	Complex rezultat = nr1.mult(nr2);
	if (rezultat.getterReal() == 3 && rezultat.getterImag() == -4)
		cout << "Test ok!"<<endl;
	Complex nr3 = Complex(-1, -2);
	Complex nr4 = Complex(7, 2);
	Complex rezultat2 = nr3.mult(nr4);
	if (rezultat2.getterReal() == -3 && rezultat2.getterImag() == -16)
		cout << "Test ok!"<<endl;
}

void test_quot()
//Metoda impartirii numerelor complexe va fi testata
{
	Complex nr1 = Complex(1, 2);
	Complex nr2 = Complex(3, 3);
	Complex rezultat = nr1.quot(nr2);
	if (rezultat.getterReal() == 0.5 && rezultat.getterImag() == 0.166667)
		cout << "Test ok!"<<endl;
	Complex nr3 = Complex(5, 2);
	Complex nr4 = Complex(5, 2);
	Complex rezultat2 = nr3.quot(nr4);
	if (rezultat2.getterReal() == 1 && rezultat2.getterImag() == 0)
		cout << "Test ok!"<<endl;
}

void test_abs()
//Metoda determinarii modulului numerelor complexe va fi testata
{
	Complex nr1 = Complex(0, 0);
	Complex nr2 = Complex(3, 4);
	double rezultat1 = nr1.abs();
	double rezultat2 = nr2.abs();
	if (rezultat1 == 0 && rezultat2 == 5)
		cout << "Test ok!"<<endl;
}
//teste Rational
void test_add_rational()
{
	Rational r;
	int  ok = 0;
	assert((r.add_rational(1, 1, 1, 1) == 2));
	assert((r.add_rational(1, 2, 3, 2) == 2));
	assert((r.add_rational(5, 7, 7, 5) == 2));
	cout << "Test add rational ok!"<<endl;
}

void test_mul_rational()
{
	Rational r;
	int  ok = 0;
	assert((r.mul_rational(1, 1, 1, 1) == 1));
	assert((r.mul_rational(1, 2, 3, 2) == 0));
	assert((r.mul_rational(5, 7, 7, 5) == 1));
	cout << "Test mul rational ok!"<<endl;
}

void test_div_rational()
{
	Rational r;
	int  ok = 0;
	assert((r.div_rational(1, 1, 1, 1) == 1));
	assert((r.div_rational(1, 2, 3, 2) == 0));
	assert((r.div_rational(5, 7, 7, 5) == 0));
	cout << "Test div rational ok!" << endl;
}