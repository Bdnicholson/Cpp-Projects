#include "Complex.h"
#include <iostream>
using namespace std;

int main(int aggc, char *argv[]) {
    cout << "testing CompleX" << endl;
    Complex c1(2.0,3.0);
    Complex c2(4.0,5.0);
    Complex c3 = c1 + c2;
    Complex c4 = c2 - c1;
    Complex c5 = c1*c2;
    Complex c6 = c1*6;
    Complex c7 = c2/c1;
    Complex c8 = c2/2;
    cout << c3 << endl;
    cout << c4 << endl;
    cout << c5 << endl;
    cout << c6 << endl;
    cout << c7 << endl;
    cout << c8 << endl;
}
