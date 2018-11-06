#pragma once

class Node {
    private: 
        int data;
        Node * next;
    public:

    Node(int data) : data(data) {
        next = NULL;
    }

    int getData() {
            return data;
    }

    void setData(int data) {
            this->data = data;
    }

    Node *getNext() {
            return next;
    }

    void setNext(Node *Next) {
            this->next = Next;
    }
};
