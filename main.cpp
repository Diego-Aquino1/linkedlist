#include <iostream>

#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList L;
    //INSERTAR ELEMENTOS
    L.insertP(56);
    L.insertP(5);
    L.insertP(556);
    L.insertP(7);
    L.insertP(98);
    L.insertP(71);

    //ORDENAR ELEMNTOS
    L.sort();

    //MOSTRAR ELEMENTOS
    L.print();

    //BORRAR ELLEMENTOS POR UBICACIÓN
    L.remove(2);

    L.print();

    cout<<endl;
    //SOBRECARGA DE OPERADOR
    cout<<L;

    return 0;
}