#ifndef BOOK_ABOUT_CPP_MATRIXFUNCS_H
#define BOOK_ABOUT_CPP_MATRIXFUNCS_H
#include "Matrix.h"

// Функция, нужная для корректного заполнения матриц функцией rand(). Должна быть в начале программы.
//------------------------------------------------------------------------------------------
void setTimeSeed();

// Функция, вычисляющая произведение двух матриц.
//------------------------------------------------------------------------------------------
Matrix matrixProduct(Matrix matrix1, Matrix matrix2);

// Функция, вычисляющая сумму двух матриц.
//------------------------------------------------------------------------------------------
Matrix matrixSum(Matrix matrix1, Matrix matrix2);

// Функция, вычисляющая разность двух матриц.
//------------------------------------------------------------------------------------------
Matrix matrixDiff(Matrix matrix1, Matrix matrix2);

// Функция, находящая минимальный элемент матрицы.
//------------------------------------------------------------------------------------------
int getMin(Matrix matrix);

// Функция, находящая максимальный элемент матрицы.
//------------------------------------------------------------------------------------------
int getMax(Matrix matrix);

// Рекурсивная функция, вычисляющая определитель матрицы.
//------------------------------------------------------------------------------------------
int getDet(Matrix matrix);

// Вспомогательная функция, использующаяся в ф-и getDet().
//------------------------------------------------------------------------------------------
Matrix subMatrix(int **matrix, int n, unsigned int x, unsigned int y);

#endif //BOOK_ABOUT_CPP_MATRIXFUNCS_H
