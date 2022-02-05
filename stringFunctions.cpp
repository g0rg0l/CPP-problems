#include <iostream>
#include "stringFunctions.h"


//---------------------------------------------------------------------
// Определение длинны строки
int getLength(const char *str)
{
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

//---------------------------------------------------------------------
// Вывод исходной строки в обратном порядке
char *reverse(char *str)
{
    int length = getLength(str);

    for (int i = 0; i < length/2; i++)
    {
        std::swap(str[i], str[length - i - 1]);
    }

    return str;
}

//---------------------------------------------------------------------
// Проверка баланса скобок в выражении
int checkForBracketsBalance(char *str)
{
    int brackets[3] = {0, 0, 0}; // < '(', '[', '{' >
    int length = getLength(str);
    bool hasBrackets = false;

    for (int i = 0; i < length; i++)
    {
        if (str[i] == '(') brackets[0]++; hasBrackets = true;
        if (str[i] == ')')
        {
            if (brackets[0] == 0) return 0;
            brackets[0]--;
        }

        if (str[i] == '[') brackets[1]++; hasBrackets = true;
        if (str[i] == ']')
        {
            if (brackets[1] == 0) return 0;
            brackets[1]--;
        }
        if (str[i] == '{') brackets[2]++; hasBrackets = true;
        if (str[i] == '}')
        {
            if (brackets[2] == 0) return 0;
            brackets[2]--;
        }

    }
    if ((brackets[0] + brackets[1] + brackets[2]) != 0) return 0;
    if (not hasBrackets) return -1;
    return 1;
}

//---------------------------------------------------------------------
// Поиск первого вхождения подстроки в строку
int searchForSubstring(char *str, char *substr)
{
    int lengthStr = getLength(str);
    int lengthSubstr = getLength(substr);

    bool flag;

    for (int i = 0; i < lengthStr; i++)
    {
        if (str[i] == substr[0]) {
            flag = true;

            for (int j = 1; j < lengthSubstr; j++)
            {
                if (str[i + j] != substr[j]) {
                    flag = false;
                    break;
                }
            }

            if (flag) return (i + 1);
        }
    }
    return 0;
}

//---------------------------------------------------------------------
// Вставка подстроки в строку по индексу
char *insertSubstring (char *str, char *substr, int index)
{

    int lengthStr = getLength(str);
    int lengthSubstr = getLength(substr);
    int lengthNewStr = lengthStr + lengthSubstr;

    char *newStr = new char[lengthNewStr];

    for (int i = 0; i < index - 1; i++) newStr[i] = str[i];
    for (int i = 0; i < lengthSubstr; i++) newStr[i + index - 1] = substr[i];
    for (int i = index - 1; str[i] != 0; i++) newStr[i + lengthSubstr] = str[i];

    return newStr;

}

//---------------------------------------------------------------------
// Извлечение k символов входной строки, начиная с позиции n
char *getSubstring(char *str, int k, int n)
{
    char *newStr = new char[k];

    for (int i = 0; i < k; i++)
    {
        newStr[i] = str[i + n - 1];
    }

    return newStr;
}