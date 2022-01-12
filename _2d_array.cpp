#include "_2d_array.h"

_2DArray::_2DArray(long rows, long cols) {
  this->rows = rows;
  this->cols = cols;
  cout  << rows << " Rows & " << cols << " Cols!" << endl;
  _2DArray::fillArray();
}

void _2DArray::fillArray(){
  // cout << "Filling Array" << endl;
  arr = new long*[rows];
  for (long i=0; i < rows; i++) {
    // cout << "Filling Array[" << i << "]" << endl;
    arr[i] = new long[cols];
    for (long j=0; j < cols; j++) {
      // cout << "Filling Array[" << i << "]" << "[" << j << "]" << endl;
      arr[i][j] = rand() % 2;
      
      // i*rows + j + 1;
    }
  }
  // cout << "Done Filling Array" << endl;
}

void _2DArray::printArray() {
  for (long i=0; i < rows; i++) {
    for (long j=0; j < cols; j++) {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
}

_2DArray::~_2DArray(){
  for (long i =0; i < rows; i++) {
    delete[] arr[i];
  }
  delete[] arr;
}