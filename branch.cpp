#include <iostream>
#include <cstring>
#include "Leaf.h"

using namespace std;

//
Leaf* Leaf::getNext() {
  return leaf;
}

//
void Leaf::setNext(Leaf* leaf) {
  this -> leaf = leaf;
}

Leaf::~Leaf() {

}

void Leaf::numR(Leaf* right) {
  this -> leaf = right;
}

void Leaf::numL(Leaf* left) {
  this -> leaf = left;
}
