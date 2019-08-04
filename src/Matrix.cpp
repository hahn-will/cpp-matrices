#include "Matrix.hpp"

#include <stdexcept>

Matrix::Matrix(unsigned rows, unsigned cols) : rows(rows), cols(cols) {
  mat = new double*[rows];
  for (unsigned i = 0; i < rows; i++) {
    mat[i] = new double[cols];
  }
}

double &Matrix::operator()(unsigned row, unsigned col) {
  if (row > rows || col > cols)
    std::out_of_range("Attempted to access an element that doesn't exist");
  return mat[row][col];
}
