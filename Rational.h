#pragma once
#include<iostream>

class Rational
{
private:
	int n1, n2, d1, d2;
public:
	int add_rational(int n1, int d1, int n2, int d2);
	int mul_rational(int n1, int d1, int n2, int d2);
	int div_rational(int n1, int d1, int n2, int d2);

};

