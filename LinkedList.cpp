#include "LinkedList.h"
#include <stdio.h>
#include <iostream>

using namespace std;

LinkedList::LinkedList(){
    head=NULL;
}

void LinkedList::insertP(int num){
    head = new Node(num, head);
}

void LinkedList::insertU(int num){
    Node *aux = head;
    Node *niu;
    if(aux==NULL){
        insertP(num);
    }
    else{
        while (aux->getNext() != NULL){
            aux = aux->getNext();
        }
        niu = new Node(num, NULL);
        aux->setNext(niu);
    }
}

void LinkedList::sort(){
    Node *aux = head;
    Node *aux2 = NULL;
    int num;
    while (aux->getNext() != NULL){
        aux2 = aux->getNext();
        while (aux2 != NULL){
            if (aux->getElem() > aux2->getElem()){
                num = aux2->getElem();
                aux2->setElem(aux->getElem());
                aux->setElem(num);
            }
            
            aux2 = aux2->getNext();
        }
        
        aux = aux->getNext();
    }

}

/*
void LinkedList::insert(int num){
    Node *aux = head;

    while (aux != NULL){
        if(aux->getElem() < num){
            insertP(num);
        }
        else{
            insertU(num);
        }
    }
}
*/

void LinkedList::remove(int pos){
    Node *aux = head;
    Node *aux2;
    int i=1;
    if(aux != NULL){
        if(pos == 1){
            head = aux->getNext();
        }
        else{
            while (i < pos && aux->getNext() != NULL){
                aux2 = aux;
                aux = aux->getNext();
                i++;
            }
            aux2->setNext(aux->getNext());
        }
        delete aux;
    }
}

void LinkedList::print(){
    Node *aux = head;
    int i=1;
    while (aux != NULL){
        cout<<"Elemento "<<i<<" :"<<aux->getElem()<<endl;
        aux= aux->getNext();
        i++;
    }
}

LinkedList::~LinkedList(){
    Node *auxa = head;
    Node *auxb;
    while (auxa != NULL){
        auxb = auxa->getNext();
        delete auxa;
        auxa=auxb;
    }
}
