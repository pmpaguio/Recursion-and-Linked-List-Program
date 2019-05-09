#include <fstream>
#include "linkedlist.h"

linkedlist::linkedlist() {
  node * headNode = new node;
  headNode->data = 0;
  headNode->next = nullptr;
  this->head = headNode;
}

linkedlist::~linkedlist() {
    // RECURSIVE
    DeleteNode(head);
}

void linkedlist::DeleteNode(node * linkNode){
  if (linkNode == NULL)
    return;
  DeleteNode(linkNode->next);
  delete linkNode;
}

int linkedlist::count() {
    return count(head->next);
}

int linkedlist::count(node * linkNode){
  if (linkNode == NULL)
    return 0;
  return 1 + count(linkNode->next);
}

void linkedlist::addToFront(int n) {
  node * headNode0 = new node;
  node * headNode1 = new node;
  node * newNode;
  bool nodeAdded = false;
  headNode0 = head;
  headNode1 = head->next;
  while (!nodeAdded){
    if (headNode1 == NULL)
    {
      newNode = new node;
      newNode->data = n;
      newNode->next = NULL;
      headNode0->next = newNode;
      nodeAdded = true;
      break;
    }
    else
    {
      if (n <= headNode1->data)
      {
        newNode = new node;
        newNode->data = n;
        newNode->next = headNode1;
        headNode0->next = newNode;
        nodeAdded = true;
        break;
      }
      else
      {
        headNode0 = headNode1;
        headNode1 = headNode0->next;
      }
    }
  }
}

double linkedlist::average() {
    // uses sum and count functions
    int totalSum = sum();
    int totalCount = count();
    float average = 0;
    if (totalCount != 0 && totalSum != 0)
      average = (float)totalSum/totalCount;
    return average;
}

int linkedlist::sum() {
  return sum(head);
}

int linkedlist::sum(node * linkNode){
  if (linkNode == NULL)
    return 0;
  return linkNode->data + sum(linkNode->next);
}

void linkedlist::writeInorder(string & file) {
  ofstream theFile;
  theFile.open(file, std::ofstream::out | std::ofstream::app);

  node * tempNode = head->next;
  while (tempNode != NULL) {
      theFile << tempNode->data << " ";
      tempNode = tempNode->next;
  }
  theFile << endl;
  theFile.close();
}

void linkedlist::writeReversed(string & file) {
    // RECURSIVE
    ofstream theFile;
    theFile.open(file, std::ofstream::out | std::ofstream::app);
    node * tempNode = head->next;
    writeReversed(theFile, tempNode);
    theFile << endl;
    theFile.close();
}

void linkedlist::writeReversed(std::ofstream &theFile, node * linkNode){
  if (linkNode == NULL)
    return;
  writeReversed(theFile, linkNode->next);
  theFile << linkNode->data << " ";
  return;
}

void linkedlist::print()
{
  node * tempNode = head->next;
  while (tempNode != nullptr) {
      std::cout << tempNode->data << endl;
      tempNode = tempNode->next;
  }
}
