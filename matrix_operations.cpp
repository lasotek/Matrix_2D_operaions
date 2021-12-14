#include "matrix_operations.h"
#include <stdexcept>

Matrix transpose(const Matrix &matrix)
{
    Matrix result(matrix[0].size(), std::vector<double>(matrix.size()));
    for (size_t i = 0; i < matrix.size(); ++i)
    {
        for (size_t j = 0; j < matrix[i].size(); ++j)
        {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

Matrix add_sub(const Matrix &matrix_left, const Matrix &matrix_right, bool sub)
{
    if (matrix_left.size()==0 || matrix_left[0].size()==0 || matrix_right.size()==0 || matrix_right[0].size()==0)
    {
        throw std::invalid_argument("No matrix can be empty");
    }
    if (matrix_left.size() != matrix_right.size() || (matrix_left[0].size() != matrix_right[0].size()))
    {
        throw std::invalid_argument("Matrix sizes are not equal");
    }
    Matrix result(matrix_left.size(), std::vector<double>(matrix_left[0].size()));
    for (size_t i = 0; i < matrix_left.size(); ++i)
    {
        for (size_t j = 0; j < matrix_left[i].size(); ++j)
        {
            result[i][j] = matrix_left[i][j] + (sub ? -matrix_right[i][j] : matrix_right[i][j]);
        }
    }
    return result;
}

Matrix add(const Matrix &matrix_left, const Matrix &matrix_right)
{
    return add_sub(matrix_left, matrix_right, false);
}

Matrix subtract(const Matrix &matrix_left, const Matrix &matrix_right)
{
    return add_sub(matrix_left, matrix_right, true);
}

Matrix multiply(const Matrix &matrix_left, const Matrix &matrix_right)
{
    if (matrix_left.size() == 0 || matrix_left[0].size() == 0 || matrix_right.size() == 0 || matrix_right[0].size() == 0)
    {
        throw std::invalid_argument("No matrix can be empty");
    }
    if (matrix_left[0].size() != matrix_right.size())
    {
        throw std::invalid_argument("The number of columns of the first matrix must be equal to the number of rows of the second matrix");
    }
    Matrix result(matrix_left.size(), std::vector<double>(matrix_right[0].size()));
    for (size_t i = 0; i < matrix_left.size(); ++i)
    {
        for (size_t j = 0; j < matrix_right[0].size(); ++j)
        {
            for (size_t k = 0; k < matrix_left[0].size(); ++k)
            {
                result[i][j] += matrix_left[i][k] * matrix_right[k][j];
            }
        }
    }
    return result;
}
