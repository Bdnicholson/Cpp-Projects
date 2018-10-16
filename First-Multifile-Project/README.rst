This project has three files:

main.cpp

compare.cpp

compare.h

The "compare.cpp" file contains one function, also named "compare". 
This function takes two integer reference parameters with names "param1" and "param2" and compares them.
It returns a single character based on what it sees. 

Just to prove that the "compare" function really does have access to your caller’s variables, 
have the function flip the sign of each parameter before you process the return statement.

Ex:

param1 = -param1;

param2 = -param2;
