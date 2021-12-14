#include <iostream>
#include "manip_2d_vector.h"
#include "matrix_operations.h"

int main(int, char **)
{
    try
    {
        Matrix m1, m2;
        std::cout << "Empty martrices operation:" << std::endl;
        auto res = add(m1, m2);
        display_2d_matrix(res);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Matrix m1, m2;
        auto [rows, cols] = randomize_size(10);
        resize_2d_matrix(m1, rows, cols);
        fill_2d_matrix_with_random_values(m1, -10, 10);
        std::cout << "Matrix m1:" << std::endl;
        display_2d_matrix(m1);
        resize_2d_matrix(m2, rows, cols);
        fill_2d_matrix_with_random_values(m2, -10, 10);
        std::cout << "Matrix m2:" << std::endl;
        display_2d_matrix(m2);
        std::cout << "m1 + m2:" << std::endl;
        auto res1 = add(m1, m2);
        display_2d_matrix(res1);
        std::cout << "m1 - m2:" << std::endl;
        auto res2 = subtract(m1, m2);
        display_2d_matrix(res2);
        std::cout << "m1 + m2^T:" << std::endl;
        auto res3 = add(m1, transpose(m2));
        display_2d_matrix(res3);
        std::cout << "m1 - m2^T:" << std::endl;
        auto res4 = add(m1, transpose(m2));
        display_2d_matrix(res4);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Matrix m1, m2, m3;
        auto [rows1, cols1] = randomize_size(10);
        auto [rows2, cols2] = randomize_size(10);
        resize_2d_matrix(m1, rows1, cols1);
        fill_2d_matrix_with_random_values(m1, -10, 10);
        resize_2d_matrix(m2, rows2, cols2);
        fill_2d_matrix_with_random_values(m2, -10, 10);
        resize_2d_matrix(m3, cols1, cols2);
        fill_2d_matrix_with_random_values(m3, -10, 10);
        std::cout << "Matrix m1:" << std::endl;
        display_2d_matrix(m1);
        std::cout << "Matrix m2:" << std::endl;
        display_2d_matrix(m2);
        std::cout << "Matrix m3:" << std::endl;
        display_2d_matrix(m3);
        std::cout << "m1 * m3:" << std::endl;
        auto res2 = multiply(m1, m3);
        display_2d_matrix(res2);
        std::cout << "m1 * m2:" << std::endl;
        auto res1 = multiply(m1, m2);
        display_2d_matrix(res1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
