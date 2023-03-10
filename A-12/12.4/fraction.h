/*
CH-230-A
a12 p5.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#ifndef FRACTION_H_
#define FRACTION_H_
#include<ostream>



class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1


    friend std::ostream  &operator <<(std::ostream &out, const Fraction &source);
    friend std::istream  &operator >>(std::istream &in, Fraction &source);

	Fraction operator * (Fraction &source);
    Fraction operator / (Fraction &source);	
	Fraction operator +(Fraction& source);
	Fraction operator -(Fraction& source);	
	Fraction& operator =(const Fraction& source);
	bool operator <(const Fraction &source);
	bool operator >(const Fraction &source);
};




#endif /* FRACTION_H_ */