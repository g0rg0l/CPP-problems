#include "matrixFuncs.h"
#include "ctime"
#include "random"
#include <iostream>

void setTimeSeed()
{
    srand(time(NULL));
}

Matrix matrixProduct(Matrix matrix1, Matrix matrix2)
{
    Matrix outMatrix (matrix1.getRows(), matrix2.getColumns());

    int** c = outMatrix.getData();
    int** a = matrix1.getData();
    int** b = matrix2.getData();

    for (int i = 0; i < matrix1.getRows(); i++)
    {
        for (int j = 0; j < matrix2.getColumns(); j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < matrix1.getColumns(); k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    outMatrix.setData(c);

    return outMatrix;
}

int getMin(Matrix matrix)
{
    int min = INT_MAX;
    int** data = matrix.getData();


    for (int i = 0; i < matrix.getRows(); i++)
    {
        for (int j = 0; j < matrix.getColumns(); j++)
        {
            if (data[i][j] < min) min = data[i][j];
        }
    }

    return min;
}

int getMax(Matrix matrix)
{
    int max = INT_MIN;
    int** data = matrix.getData();


    for (int i = 0; i < matrix.getRows(); i++)
    {
        for (int j = 0; j < matrix.getColumns(); j++)
        {
            if (data[i][j] > max) max = data[i][j];
        }
    }

    return max;
}

int getDet(Matrix matrix) {
    int **data= matrix.getData();
    int n = matrix.getRows();
    int det = 0;

    if (n != matrix.getColumns())
    {
        std::cout << "Not a square matrix." << std::endl;
        exit(1);
    }

    if (n == 2)
    {
        return data[0][0] * data[1][1] - data[1][0] * data[0][1];
    }
    for (int x = 0; x < n; ++x)
    {
        det += ((x % 2 == 0 ? 1 : -1) * data[0][x] * getDet(subMatrix(data, n, x, 0)));
    }

    return det;
}

Matrix subMatrix(int **matrix, int n, unsigned int x, unsigned int y) {
    int **sub = new int *[n - 1];
    int subI = 0;

    for (int i = 0; i < n; i++) {
        sub[subI] = new int[n - 1];
        int subJ = 0;

        if (i == y) continue;

        for (int j = 0; j < n; j++)
        {
            if (j == x) continue;

            sub[subI][subJ] = matrix[i][j];
            subJ++;
        }
        subI++;
    }

    Matrix out (n - 1, n - 1);
    out.setData(sub);

    return out;
}

Matrix matrixSum(Matrix matrix1, Matrix matrix2) {

    int row1 = matrix1.getRows();
    int row2 = matrix2.getRows();
    int col1 = matrix1.getColumns();
    int col2 = matrix2.getColumns();

    Matrix outMatrix (row1, col1);

    int **data1 = matrix1.getData();
    int **data2 = matrix2.getData();
    int **data3 = outMatrix.getData();

    if (row1 == row2 && col1 == col2)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                data3[i][j] = data1[i][j] + data2[i][j];
            }
        }

        outMatrix.setData(data3);
    }
    else
    {
        std::cout << "The matrices must be of the same dimension." << std::endl;
        exit(1);
    }

    return outMatrix;
}

Matrix matrixDiff(Matrix matrix1, Matrix matrix2) {

    int row1 = matrix1.getRows();
    int row2 = matrix2.getRows();
    int col1 = matrix1.getColumns();
    int col2 = matrix2.getColumns();

    Matrix outMatrix (row1, col1);

    int **data1 = matrix1.getData();
    int **data2 = matrix2.getData();
    int **data3 = outMatrix.getData();

    if (row1 == row2 && col1 == col2)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                data3[i][j] = data1[i][j] - data2[i][j];
            }
        }

        outMatrix.setData(data3);
    }
    else
    {
        std::cout << "The matrices must be of the same dimension." << std::endl;
        exit(1);
    }

    return outMatrix;
}

