#include "utilities.h"
#include <iostream>
using namespace std;

void show_grades(int data[], int num_values) {
    for(int i = 0; i < num_values; i++)
        cout << data[i] << endl;
    }

int show_max(int data[], int num_values) {
    int max = data[0];
    for (int i = 1; i < num_values; i++){
        if(max < data[i])
            max = data[i];
    return max;
    }
}

int show_min(int data[], int num_values) {
    int min = data[0];
    for (int i = 1; i < num_values; i++){
        if(data[i] < min)
            data[i] = min;
    return min;
    }
}

void letter_grade (int data[], int num_values) {
    for (int i = 0; i < num_values; i++){
        if (data[i] >= 90)
            cout << data[i] << " is equal to an A" << endl;

        else if (data[i] >= 80 && data[i] <= 89)
            cout << data[i] << " is equal to a B" << endl;

        else if (data[i] >= 70 && data[i] <= 79)
            cout << data[i] << " is equal to a C" << endl;

        else if (data[i] >= 60 && data[i] <= 69)
            cout << data[i] << " is equal to a D" << endl;

          else if (data[0] <= 59)
            cout << data[0] << " is equal to an F" << endl; 
}
}
