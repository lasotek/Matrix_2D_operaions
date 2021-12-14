#ifndef __MANIP_2D_VECTOR_H__
#define __MANIP_2D_VECTOR_H__
#include <vector>
/**
 * @brief 2d matrix
 * 
 */

typedef std::vector<std::vector<double>> Matrix;

/**
 * @brief randomize 2d matrix size
 * 
 * @param max_size maximum size of the matrix
 * @return std::pair<int,int>  matrix size (rows, cols)
 */
std::pair<int,int> randomize_size(int max_size);
/**
 * @brief Filling 2d matrix with random values
 * 
 * @param matrix Matrix with fixed size 
 * @param from minimum random value
 * @param to maximum random value
 */
void fill_2d_matrix_with_random_values(Matrix &matrix, double from, double to);

/**
 * @brief Display the content of 2d matrix
 * 
 * @param matrix Matrix with fixed size and filled with values
 */
void display_2d_matrix(const Matrix &matrix);

/**
 * @brief 
 * 
 * @param matrix Matrix - can be empty
 * @param rows new number of rows
 * @param cols new number of columns
 */
void resize_2d_matrix(Matrix &matrix, int rows, int cols);

Matrix create_matrix(int rows, int cols);

#endif // __MANIP_2D_VECTOR_H__