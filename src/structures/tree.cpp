#include "headers/tree.h"
using namespace std;

Tree::Tree(int rootVal) {
    root = new TNode(rootVal);
    size = 1;
}