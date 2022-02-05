#include <iostream>
#include "comparingOfSorts.h"

int main()
{
    const int N = 10000;
    int array[N];

    initMass(array, N);
    std::cout << "Shaker: " << sortByShaker(array, N) << std::endl;

    initMass(array, N);
    std::cout << "Choice: " << sortByChoice(array, N) << std::endl;

    //--------------------------------------------------------
    // В результате получаем, что шейкер-сортировка ~ в 3 раза уступает сортировке
    // методом простых вставок, конечно, если речь идёт не о почти отсортированном массиве.
    //--------------------------------------------------------

    return 0;
}
