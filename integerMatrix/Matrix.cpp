#include <iostream>
#include "Matrix.h"

Matrix::Matrix(int rows, int columns, bool random, int init)
{
    m_rows = rows;
    m_columns = columns;
    m_data = generateData(random, init);

}

int **Matrix::generateData(bool random, int init) const
{
    int **array = new int *[m_rows];

    for (int i = 0; i < m_rows; i++)
    {
        array[i] = new int [m_columns];
    }

    for (int i = 0; i < m_rows; i++)
    {
        for (int j = 0; j < m_columns; j++)
        {
            if (random && init) array[i][j] = init;
            else if (random) array[i][j] = rand() % ((m_rows * m_columns) + 1);
            else array[i][j] = init;
        }
    }

    return array;
}

void Matrix::show()
{
    for (int i = 0; i < m_rows; i++)
    {
        for (int j = 0; j < m_columns; j++)
        {
            std::cout << m_data[i][j] << " ";
        }
        std::cout << "" << std::endl;
    }

    std::cout << "" << std::endl;
}

int Matrix::getRows() const
{
    return m_rows;
}

int Matrix::getColumns() const
{
    return m_columns;
}

int **Matrix::getData() const
{
    return m_data;
}

void Matrix::setData(int** data)
{
    m_data = data;
}

