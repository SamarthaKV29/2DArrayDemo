#include <iostream>

using namespace std;

#ifndef _2D_ARRAY_H
#define _2D_ARRAY_H

class _2DArray {
  private:
    long** arr = nullptr;
    long rows, cols;
    void fillArray();

  public:
    void printArray();
    _2DArray(long rows, long cols);
    ~_2DArray();
};

#endif
