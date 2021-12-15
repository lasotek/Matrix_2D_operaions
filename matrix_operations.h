#ifndef __MATRIX_OPERATIONS_H__
#define __MATRIX_OPERATIONS_H__
#include "manip_2d_vector.h"

/**
 * @brief Matrix transposition
 * 
 * @param  matrix the original matrix 
 * @return Matrix the result matrix
 */
Matrix transpose(const Matrix &matrix);

/**
 * @brief Matrices addition
 * 
 * @param matrix_left left matrix
 * @param matrix_right right matrix
 * @return Matrix result matrix
 */
Matrix add(const Matrix &matrix_left, const Matrix &matrix_right);

/**
 * @brief Matrices subtraction
 * 
 * @param matrix_left left matrix
 * @param matrix_right right matrix
 * @return Matrix result matrix
 */
Matrix subtract(const Matrix &matrix_left, const Matrix &matrix_right);

/**
 * @brief Matrix multiplication
 * 
 * @param matrix_left left matrix
 * @param matrix_right right matrix
 * @return Matrix result matrix
 */
Matrix multiply(const Matrix &matrix_left, const Matrix &matrix_right);

#endif // __MATRIX_OPERATIONS_H__