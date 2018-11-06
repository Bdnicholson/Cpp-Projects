#include <iostream>
using namespace std;
#include "List.h"

int main ( int argc, char *argv[] ) {

    // testing
    List list;
    // adds in order
    list.addInorder(1);
    list.addInorder(2);
    list.addInorder(8);
    list.addInorder(2);
    cout << "string represenation: " <<  list.toString() << endl;
    cout << "list after adding 1, 2, 8, 2 in order: ";
    list.print();
    cout << "size: " <<  list.getSize() << endl;
    // add -1 at last
    cout << endl;
    cout << "adding -1 at last..." << endl;
    list.addAtLast(-1);
    cout << "list after adding -1 at last: ";
    list.print();
    cout << "size: " <<  list.getSize() << endl;
}
