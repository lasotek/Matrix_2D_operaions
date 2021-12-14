#ifndef __MATRIX_OPERATIONS_H__
#define __MATRIX_OPERATIONS_H__
#include "manip_2d_vector.h"

Matrix transpose(const Matrix &matrix);
Matrix add(const Matrix &matrix_left, const Matrix &matrix_right);
Matrix subtract(const Matrix &matrix_left, const Matrix &matrix_right);
Matrix multiply(const Matrix &matrix_left, const Matrix &matrix_right);

#endif // __MATRIX_OPERATIONS_H__