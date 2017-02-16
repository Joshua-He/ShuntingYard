#include <iostream>
#include <string.h>
#include <stack>
#include "Node.h"

using namespace std;

int main(){

  char array[100];
  cout << "Enter Infix expression" << endl;
  cin.getline(array);
  
}


//Convert infix to postfix

  for (int i = 0; i <; i++){
    if (i == 
  }
}


//Evaluate if the character is an operator
bool isOperator(){
  if (C == '+' || C == '-' || C == '*' || C == '^' || C == '/'){
    return true;
  }
  else return false;
}

//Evaluate if the character is a letter or number 
bool isOperand(){
  if (C >= '0' && C <= '9'){
    return true;
  }
  if (C >= 'a' && C <= 'z'){
    return true;
  }
  if (C >= 'A' && C <= 'Z'){
    return true;
  }
  else {
    return false;
  }
}

//evaluate if the character is a space
bool isSpace(){
  if (C == ' '){
    return true;
  }
  else {
    return false;
  }
}


