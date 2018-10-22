#include "utilities.h"
#include <iostream>
void show_grades(int data[], int num_values);

int main(int argc, char * argv[]){
    int grades[15] = { 55, 87, 93, 77, 92, 88, 67, 81, 84, 73, 81, 92, 89, 100, 62 };

    cout<<"Displaying grades:"<<endl;
    cout<<"\n";
	show_grades(grades, 15);
	
	 cout<<"\n";
	 
	 int high = show_max(grades,15);
	 cout<<"Highest score:"<<high<<endl;
	 
	 cout<<"\n";
	 
	 int low = show_min(grades,15);
	 cout<<"Lowest score:"<<low<<endl;
	 
	 cout<<"\n";
	 
	 cout<<"Displaying letter score:"<<endl;
	  cout<<"\n";
	 
	 letter_grade(grades,15);
	 
	 cout<<"\n";
	 
	 return 0;
}

