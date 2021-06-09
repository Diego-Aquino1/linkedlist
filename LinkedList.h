#ifndef __LINKED_LIST__
#define __LINKED_LIST__
#include "Node.h"
#include <stdio.h>
#include <iostream>

using namespace std;

class LinkedList
{
private:
    int size;
    Node * head;
public:
    LinkedList();
    void insertP(int);
    void insertU(int);
    void sort();
    void insert(int);
    void remove(int);
    void print();

    friend std::ostream& operator << (std::ostream& o, const LinkedList& p){
        Node *aux = p.head;
        cout<<"LINKED LIST: "<<endl;
        while (aux != NULL){
            o<<aux->getElem()<<" -> ";
            aux= aux->getNext();
        }
    return o;
    }
 

    ~LinkedList();
};

#endif