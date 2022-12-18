/*
CH-230-A
a12 p5.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}


std::ostream &operator <<(std::ostream& out ,const Fraction &source)
{
	out << source.num << "/" << source.den <<std::endl;
	return out;
}

std::istream &operator >>(std::istream& in , Fraction &source)
{
	int temp;
	std::cout<<"Enter Numerator"<<std::endl;

	in >> source.num;


	do
	{
		std::cout<<"Enter Denominator"<<std::endl;
		in>>temp;

	}while (temp==0);
	source.den=temp;
	return in;
}

Fraction Fraction::operator * (Fraction& source)
{
	Fraction ans(this->num*source.num,this->den*source.den);
	return ans;

}

Fraction Fraction::operator / (Fraction& source)
{
	Fraction ans(this->num*source.den,this->den*source.num);
	return ans;
}


Fraction Fraction::  operator +(Fraction& source)
{
	Fraction ans(this->num + source.num, this->den + source.den);

	return ans;
}


Fraction Fraction::operator -(Fraction& source)
{
	Fraction ans;
	ans.num=((this->num*lcm(this->den,source.den))/this->den)-((source.num*lcm(this->den,source.den))/source.den);
	ans.den=lcm(this->den,source.den);
	return ans;
}

Fraction& Fraction::operator =(const Fraction&source)
{
	this->num=source.num;
	this->den=source.den;
	return *this;
}

bool Fraction::operator <(const Fraction&source)
{
	double temp1=(double)(this->num)/(double)(this->den);
	double temp2=(double)(source.num)/(double)(source.den);
	if (temp1 <temp2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator >(const Fraction&source)
{
	double temp1=(double)(this->num)/(double)(this->den);
	double temp2=(double)(source.num)/(double)(source.den);
	if (temp1 >temp2)
	{
		return true;
	}
	else
	{
		return false;
	}
}