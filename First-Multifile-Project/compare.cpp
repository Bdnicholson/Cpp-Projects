//compare.cpp
#include<iostream>
#include "compare.h"
using namespace std;

char compare (int & var1, int & var2){
	
    int param1, param2;
	char val;

	param1 = var1;			//switching var to param
	param2 = var2;

	param1 = -param1;		//switching to negative values which will result in incorrect output
	param2 = -param2;

	if ( param1 == param2 ){		//comparing
		val = '=';
		return val;

	}else if ( param1 < param2 ){
		val='<';
		return val;

    }else{
		val='>';
		return val;
	}
}
