#include "LinkedList.h"
#include "iostream"

/* Техническая часть */
LinkedList::LinkedList() // Конструктор списка
{
    head = nullptr;
    length = 0;
}


/* Работа со списком */

void LinkedList::addToStart(City cityToAdd) // Добавить элемент в начало списка
{
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->value = cityToAdd;
    newNode->next = head;
    head = newNode;

    length++;
}

void LinkedList::addToEnd(City cityToAdd) // Добавить элемент в конец списка
{
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->value = cityToAdd;
    newNode->next = nullptr;

    if (!head) addToStart(cityToAdd);
    else
    {
        Node *curNode = head;
        while (curNode->next) // пока не дойдём до последнего элемента
        {
            curNode = curNode->next;
        }
        curNode->next = newNode;
        length++;
    }

}

void LinkedList::show() // Вывести весь список
{
    std::cout << "\n  list:" << std::endl;

    if (!head) std::cout << "   empty." << std::endl;
    else
    {
        Node *curNode = head;
        while(curNode) // пока не дойдём до конца
        {
            std::cout << "" << curNode->value.GetName() << " -> ";

            curNode = curNode->next;
        }
        printf("\n");
    }
}

int LinkedList::getLength() const // Получить число элементов в списке
{
    return length;
}

void LinkedList::pop() // Удалить последний элемент из списка
{
    if (head) // если в списке есть элементы
    {
        if (length == 1) clear();
        else
        {
            Node *curNode = head;

            while (curNode->next->next) // пока не дойдём до предпоследнего элемента
            {
                curNode = curNode->next;
            }
            curNode->next = nullptr;
            length--;
        }
    }
}

void LinkedList::clear() // Очистить список
{
    head = nullptr;
    length = 0;
}
