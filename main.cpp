#include <iostream>
#include <ctime>
#include "_2d_array.h"


using namespace std;


int main() {
  srand((unsigned)time(0));
  int n = (rand() % 5) + 1, m = (rand() % 5) + 1;
  _2DArray* arr = new _2DArray(n, m);

  arr->printArray();
  arr->~_2DArray();
} 
