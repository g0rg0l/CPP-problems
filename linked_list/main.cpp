#include "City.h"
#include "LinkedList.h"


int main() {

    City city1((char*) "name1",
               (char *) "adress1",
               0, 0, 0);
    City city2((char*) "name2",
               (char *) "adress2",
               1000, 1000, 123);
    City city3((char*) "name3",
               (char *) "adress3",
               12, 6, 0);

    LinkedList list;

    list.addToStart(city1);
    list.addToEnd(city2);
    list.addToEnd(city3);

    list.show();

    std::cout << city1.getUnworkingPercent() << std::endl;






    return 0;
}
