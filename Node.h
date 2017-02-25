#include <iostream>

class Node{
 public:
  Node();
  ~Node();
  Node* push(Node* &head);
  Node* pop(Node* &head);
  void setNext(Node* newNext);

 private:
  Node* next;
  char value[20];




};
