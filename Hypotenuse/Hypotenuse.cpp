#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float side1;
    float side2;
    float hypotenuseSquared;
    float hypotenuse;

    cout << "Finding the length of the hypotenuse of a right triangle." << endl; //Program objective
    cout << "Author: Bora Nicholson." << endl; //Author
    cout << "Enter the length of the first side (as a floating point number): " << endl; //Get first side length
    cin >> side1; //Store first side length

    while ( side1  > 0 ) { //Only run if first side is greater than 0
        cout << "Enter the length of the second side (as a floating point number): " << endl; //Get second side length
        cin >> side2; //Store second side length
        hypotenuseSquared = pow( side1, 2) + pow( side2, 2); //Hypotenuse before taking square root
        hypotenuse = sqrt(hypotenuseSquared); //Hypotenuse stored
        cout << "Hypotenuse length: " << hypotenuse << endl; //Display Hypotenuse length
        cout << "Enter the length of the first side (as a floating point number): " << endl; //Get first side length again to repeat 
        cin >> side1; //Store first side length
    }
        return 0;
}
