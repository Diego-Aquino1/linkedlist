#include "Node.h"
#include <stdio.h>

Node::Node(){
    elem = 0;
    next = NULL;
}

Node::Node(int elem_, Node *next_){
    elem = elem_;
    next = next_;
}

void Node::setElem(int elem_){
    elem = elem_;
}

void Node::setNext(Node *next_){
    next = next_;
}

int Node::getElem(){
    return elem;
}

Node * Node::getNext(){
    return next;
}

Node::~Node(){}