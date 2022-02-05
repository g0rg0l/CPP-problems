#include <iostream>
#include "ctime"
#include "comparingOfSorts.h"

//---------------------------------------------------------------------
// Инициализация одномерного массива числами [0; 999].
void initMass(int *array, int n)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 1000;
    }
}

//---------------------------------------------------------------------
// Вывод одномерного массива на консоль.
void showMass(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "" << std::endl;
}

//---------------------------------------------------------------------
// Сортировка простыми вставками, возвращающая время своей работы.
int sortByChoice(int *array, int n)
{
    int maximum = -1;
    int indexMaximum;

    int startTime = clock();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (array[j] > maximum)
            {
                maximum = array[j];
                indexMaximum = j;
            }
        }
        std::swap(array[n - i - 1], array[indexMaximum]);
        maximum = -1;
    }

    int endTime = clock();

    return (endTime - startTime);
}

//---------------------------------------------------------------------
// Сортировка-Шейкером, возвращающая время своей работы.
int sortByShaker(int *array, int n)
{
    int left, right, i;
    left = 0;
    right= n - 1;

    int startTime = clock();

    while (left <= right)
    {
        for (i = right; i >= left; i--)
        {
            if (array[i-1] > array[i])
            {
                std::swap(array[i-1], array[i]);
            }
        }
        left++;
        for (i = left; i <= right; i++)
        {
            if (array[i-1] > array[i])
            {
                std::swap(array[i-1], array[i]);
            }
        }
        right--;
    }

    int endTime = clock();

    return (endTime - startTime);
}
