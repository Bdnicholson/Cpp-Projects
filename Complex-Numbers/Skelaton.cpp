#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(double _r, double _i) {
    this->r = _r;
    this->i = _i;
}

Complex::Complex(double _r) {
    this->r = _r;
    this->i = 0.0;
}

Complex::Complex() {
    this->r = 0.0;
    this->i = 0.0;
}

Complex& Complex::operator + (const Complex & rhs) {
    Complex *temp = new Complex;
    temp->r = this->r + rhs.r;
    temp->i = this->i + rhs.i;
    return *temp;
}

Complex& Complex::operator - (const Complex & rhs) {
    //create a new complex object
    Complex *temp = new Complex;
    //subtract the 'r' of this rhs object from 'r' of this object
    temp->r = this->r - rhs.r;
    //subtract the 'i' of this rhs object from 'i' of this object
    temp->i = this->i - rhs.i;
    //return the newly created object
    return *temp;
}

Complex& Complex::operator * (const Complex & rhs) {
    //create a new complex object
    Complex *temp = new Complex;
    // (a*c-b*d) + (a*d+b*c)*i
    //get the values of a,b,c and d
    double a = this->r;
    double b = this->i;
    double c = rhs.r;
    double d = rhs.i;
    //the real part of the result is a*c-b*d
    temp->r = (a*c-b*d);
    //the imaginary part of the result is a*d+b*c
    temp->i = (a*d+b*c);
    //return the newly created object
    return *temp;
}

Complex& Complex::operator / (const Complex & rhs) {
    //create a new complex object
    Complex *temp = new Complex;
    // (a*c + b*d)/(c*c + d*d) + (b*c-a*d)/(c*c-d*d)*i
    //get the values of a,b,c and d
    double a = this->r;
    double b = this->i;
    double c = rhs.r;
    double d = rhs.i;
    //the real part of the result is (a*c + b*d)/(c*c + d*d)
    temp->r = (a*c + b*d)/(c*c + d*d);
    //the imaginary part of the result is (b*c-a*d)/(c*c_d*d)
    temp->i = (b*c-a*d)/(c*c-d*d);
    //return the newly created object
    return *temp;
}

ostream  & operator << (ostream & out, const Complex rhs) {
    return out << rhs.r << "+" << rhs.i << "i";
}

Complex & operator * (double B, const Complex& complex){
    //Create a new complex object
    Complex* result = new Complex;
    //Multiply the real and imaginary parts with the given constant
    result->r = complex.r * B;
    result->i = complex.i * B;
    //return the result
    return *result;
}

Complex & operator / (double B, const Complex& complex){
    //Create a new complex object
    Complex* result = new Complex;
    //divide the real and imaginary parts with the given constant
    result->r = complex.r / B;
    result->i = complex.i / B;
    //return the result
    return *result;
}

