#include "manip_2d_vector.h"
#include <iostream>
#include <iomanip>
#include <random>
#include <chrono>

std::mt19937 gen(std::chrono::system_clock::now().time_since_epoch().count());

void fill_2d_matrix_with_random_values(Matrix &matrix, double from, double to)
{
    std::uniform_real_distribution<double> dis(from, to);

    for (auto &row : matrix)
    {
        for (auto &element : row)
        {
            element = dis(gen);
        }
    }
}

void display_2d_matrix(const Matrix &matrix)
{
    for (auto &row : matrix)
    {
        for (auto &element : row)
        {
            std::cout << std::setw(5) << std::setprecision(3) << std::showpoint << element << " ";
        }
        std::cout << std::endl;
    }
}

void resize_2d_matrix(Matrix &matrix, int rows, int cols)
{
    matrix.resize(rows);
    for (auto &row : matrix)
    {
        row.resize(cols);
    }
}

Matrix create_matrix(int rows, int cols)
{
    Matrix result(rows, std::vector<double>(cols));
    return result;
}

std::pair<int, int> randomize_size(int max_size)
{
    std::uniform_int_distribution<int> dis(1, max_size);
    return std::make_pair(dis(gen), dis(gen));
}
