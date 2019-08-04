#ifndef MATRIX_HPP__
#define MATRIX_HPP__

#include <vector>

class Matrix {
  public:
    Matrix(unsigned, unsigned);
    double &operator()(unsigned, unsigned);
    Matrix &operator+(const Matrix) const;
    Matrix &operator-(const Matrix) const;
    Matrix &operator*(const Matrix) const;
    Matrix &operator*(const double) const;

    Matrix &transpose();
    std::vector<double> ColVector(unsigned);
    std::vector<double> RowVector(unsigned);

    Matrix &multiply();
    Matrix &add();
    Matrix &subtract();

    unsigned Rows() { return rows; };
    unsigned Cols() { return cols; };
  private:
    double **mat;

    unsigned rows;
    unsigned cols;
};

#endif
