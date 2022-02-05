#include <iostream>
#include "problems/squareMatrix/squareMatrix.h"
#include "problems/comparisonOfSorts/comparingOfSorts.h"

int main()
{
    const int N = 10000;
    int array[N];

    initMass(array, N);
    std::cout << "Shaker: " << sortByShaker(array, N) << std::endl;

    initMass(array, N);
    std::cout << "Choice: " << sortByChoice(array, N) << std::endl;


    return 0;
}