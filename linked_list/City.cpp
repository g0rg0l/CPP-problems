#include "City.h"
#include "iostream"


City::City(char *new_city_name,
           char *new_city_adress,
           int new_male_count,
           int new_female_count,
           int new_working_count)
{
    if (new_male_count + new_female_count < new_working_count)
    {
        throw std::invalid_argument(" wrong input info: uncorrect count of people ");
    }
    if (new_male_count < 0 ||  new_female_count < 0 || new_working_count < 0)
    {
        throw std::invalid_argument(" wrong input info: negative count of people");
    }

    city_name = new_city_name;
    city_adress = new_city_adress;
    male_count = new_male_count;
    female_count = new_female_count;
    working_count = new_working_count;
}

void City::Print()
{
    std::cout << "name: " << city_name << std::endl;
    std::cout << "adress: " << city_adress << std::endl;
    std::cout << "male count: " << male_count << std::endl;
    std::cout << "female count: " << female_count << std::endl;
    std::cout << "working count: " << working_count << std::endl;

    printf("\n");
}

char* City::GetName()
{
    return city_name;
}

double City::getFemalePercent() const
{
    int total_count = male_count + female_count;
    return total_count != 0 ? (double) female_count / (male_count + female_count) * 100 : 100;
}


double City::getUnworkingPercent() const
{
    int total_count = male_count + female_count;
    return total_count != 0 ? (double) (total_count - working_count) / total_count * 100 : 100;
}