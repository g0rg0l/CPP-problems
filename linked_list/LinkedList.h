#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include "City.h"

/* Структура элемента списка */
struct Node
{
    City value;
    Node *next;
};


/* Список, содержащий элементы типа Node */
class LinkedList
{

private:
    int length;
    Node *head; // Указатель на начало списка

public:
    LinkedList(); // Конструктор

    int getLength() const; // Получить число элементов в списке

    void show(); // Вывести список
    void addToStart(City);  // Добавить элемент в начало списка
    void addToEnd(City); // Добавить элемент в конец списка
    void pop(); // Удалить последний элемент из списка
    void clear(); // Очистить список
};


#endif //LINKEDLIST_LINKEDLIST_H
