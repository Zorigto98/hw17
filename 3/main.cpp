/*Задача 3.

Что нужно сделать:

Написать функцию, которая принимаем указатель на char, по которому лежит строка.

Функция должна возвращать true, если вторая строка является подстрокой первой.*/

#include <iostream>
#include <string>

using namespace std;

bool substr (char* a, char* b)
{
    if (strlen(a) < strlen(b)) return false;

    bool checkEnd=false;
    for (int i=0; i<strlen(a)-strlen(b) && !checkEnd; i++)
    {
        bool checkMatch=true;
        for (int j=0; j<strlen(b) && checkMatch; j++)
        {
            if (a[i+j]!=b[j]) checkMatch=false;
        }
        if (checkMatch) checkEnd=true;
    }
    return checkEnd;
}

int main() {
    char* a = "Hello world";
    char* b = "wor";
    char* c = "banana";

    cout << boolalpha << substr (a, b) << " " << substr (a, c) << endl;
}
