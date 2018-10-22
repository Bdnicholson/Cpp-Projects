//main.cpp
#include<iostream>
#include"compare.h"
using namespace std;

int main()
{
	int var1, var2;							//initializing values
	char val;
	
	cout << "Enter an integer for var1: ";				//prompting values
	cin >> var1;
	cout << "Enter an integer for var2: ";
	cin >> var2;

	val = compare ( var1, var2 );					//calling compare function
//	cout << val << endl;
	
	if(val=='='){							//output
		cout << "-" << var1 << " is equal to " << "-" << var2 << endl;

	} else if (val=='<'){
		cout << "-" << var1 << " is less than " << "-" << var2 << endl;

	}else{
		cout << "-" << var1 << " is greater than " << "-" << var2 << endl;
	}
}
