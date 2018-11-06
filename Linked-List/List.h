#pragma once

#include "Node.h"
#include <string>

using namespace std;


class List {
private:
    int size;
    Node *head;
public:
    // constructors
    List(){
        size = 0;
        head = NULL;
    }

    // accessors
    int getSize(){
        return size;
    }

    string toString();

    void print();

    // mutators
    void addInorder(int item);

    // add item at last
    void addAtLast(int item);
};


string List::toString() {
    string s = "";
    Node * temp = head;
    while(temp != NULL){
        s += to_string(temp->getData()) + " ";
        temp = temp->getNext();
    }
    return s;
}

void List::print() {
    Node * temp = head;
    while(temp != NULL){
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;
}


// adds in order
void List::addInorder(int item) {
    size++;
    Node *node = new Node(item);
    Node *temp = head;
    Node *prev = NULL;
    if(head == NULL){
        head = node;
        return;
    }
    while(temp != NULL){
        if(temp->getData() >= item){
           if(prev == NULL){
               node->setNext(head);
               head = node;
           }
           else{
               prev->setNext(node);
               node->setNext(temp);
           }
           return;
        }
        prev = temp;
        temp = temp->getNext();
    }

    if(prev != NULL){
        prev->setNext(node);
        node->setNext(temp);
    }

}

// adds at the end
void List::addAtLast(int item) {
    size++;
    Node *node = new Node(item);
    Node *temp = head;
    Node *prev = NULL;
    while(temp != NULL){
        prev = temp;
        temp = temp->getNext();
    }
    if(prev == NULL){
        head = node;
    }
    else{
        prev->setNext(node);
    }
}
