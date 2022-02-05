#ifndef BOOK_ABOUT_CPP_STRINGFUNCTIONS_H
#define BOOK_ABOUT_CPP_STRINGFUNCTIONS_H

int getLength(const char *str);

char *reverse(char *str);

int checkForBracketsBalance(char *str);

int searchForSubstring(char *str, char *substr);

char *insertSubstring (char *str, char *substr, int index);

char *getSubstring(char *str, int k, int n);

#endif //BOOK_ABOUT_CPP_STRINGFUNCTIONS_H
