#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex {
public:
    double r;
    double i;
    Complex(double, double);
    Complex(double);
    Complex();
    Complex& operator +(const Complex & rhs);
    Complex& operator -(const Complex & rhs);   //overriding the - operator to subtract two complex items
    Complex& operator *(const Complex & rhs);   //overriding the * operator to multipy two complex items
    friend Complex& operator* (double B, const Complex & complex);  //overriding the * operator to multiply a complex item with a double value
    Complex& operator /(const Complex & rhs);   //overriding the / operator to divide two complex items
    friend Complex& operator/ (double B, const Complex & complex);  //overriding the / operator to divide a complex item with a double value

    friend ostream & operator<< (ostream & out, const Complex);
};

#endif
