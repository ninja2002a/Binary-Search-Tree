#ifndef LEAF_H
#define LEAF_H

using namespace std;

class Leaf {
 public:
  Leaf* getNext();
  void setNext(Leaf* leaf);
  void numR(Leaf* right);
  void numL(Leaf* left);
  ~Leaf();
  Leaf();

private:
  Leaf* leaf;
  Leaf* right;
  Leaf* left;
};


#endif
