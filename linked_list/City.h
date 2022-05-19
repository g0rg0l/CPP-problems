#ifndef LINKEDLIST_CITY_H
#define LINKEDLIST_CITY_H

#include "iostream"

class City {

private:
    char *city_name; // название города
    char *city_adress; // адрес города
    int male_count; // количество мужчин в городе
    int female_count; // количество женщин в городе
    int working_count; // количество работающих в городе

public:
    explicit City(char *new_city_name = (char*) "",  // Конструктор
         char *new_city_adress = (char*) "",
         int new_male_count = 0,
         int new_female_count = 0,
         int new_working_count = 0);


    void Print(); // метод вывода информации о городе

    char *GetName(); // Метод получения имени города

    double getFemalePercent() const; // Метод получения % числа женщин в городе

    double getUnworkingPercent() const; // Метод получения % числа неработающих в городе
};


#endif //LINKEDLIST_CITY_H
