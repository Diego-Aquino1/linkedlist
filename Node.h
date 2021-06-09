#ifndef __NODE__
#define __NODE__

class Node
{
private:
    int elem;
    Node *next;
public:
    Node();
    Node(int , Node *);
    void setElem(int );
    void setNext(Node *);
    int getElem();
    Node *getNext();

    ~Node();
};

#endif