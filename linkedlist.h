//begin linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
#include <fstream>

using namespace std;

struct node {
    int data;
    node * next;
};

class linkedlist {
private:
    node * head;
    int count(); // RECURSIVE
    int count(node * linkNode);
    int sum(); // RECURSIVE
    int sum(node * linkNode);

public:
    linkedlist();
    ~linkedlist(); // RECURSIVE
    void DeleteNode(node * linkNode);
    void addToFront(int n);
    double average(); // uses sum and count functions
    void writeInorder(string & file);
    void writeReversed(string & file);
    void writeReversed(std::ofstream &theFile, node * linkNode);
    void print();
};
#endif // end linkedlist.h
