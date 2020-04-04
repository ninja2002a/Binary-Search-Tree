#include <iostream>
#include <cstring>
#include <fstream>
#include "branch.cpp"
#include "leaf.h"
#define txt 100

using namespace std;

/*
  Binary is node based data structure
  2 childs, 1 node
  It is a sorting and searching algorithm to construct abstract data
  Another linked list
  Right is bigger than left
  Only need one .h file
*/

void check(char*&);

void check(char*& input) {
  
}

int main() {
  char* input = new char[txt];
  
  cout << "Enter numbers for left leaf and right leaf." << endl;
  cin.getline(input, txt);
  
  
  
  if (strcmp(input,"exit") == 0) {
    return 0;
  }
}
