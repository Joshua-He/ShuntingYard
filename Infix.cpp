#include <iostream>
#include <string.h>
#include <stack>
#include "Node.h"
#include <cstring>

using namespace std;


void processToken(char * token);
bool isOperator(char C);
bool isOperand(char C);
bool isSpace(char C);

int main(){
  
  char array[100];
  char output[100] = "";
  char token[100]= "";
  int length;
  
  cout << "Enter Infix expression" << endl;
  cin.getline(array, 101);
  length = strlen(array);
  cout << length << endl;
  for(int i = 0; i < length; i++){
    if (array[i] == ' '){
      cout << token << endl;
      processToken(token);
      token[0] = '\0';      
    }
    else {
      strncat(token, &(array[i]), 1);
    }
    
  }
  cout << token << endl;
  processToken(token);
  
}


void processToken(char * token){
  if (isOperator(token[0]) == true){

  }
  if (isOperand(token[0]) == true){

  }
  if (token[0] == '('){

  }
  if (token[0] == ')'){

  }
}
//Evaluate if the character is an operator
bool isOperator(char C){
  if (C == '+' || C == '-' || C == '*' || C == '^' || C == '/'){
    return true;
  }
  else return false;
}

//Evaluate if the character is a letter or number 
bool isOperand(char C){
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
bool isSpace(char C){
  if (C == ' '){
    return true;
  }
  else {
    return false;
  }
}


