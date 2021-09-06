/*Задача 1.

Что нужно сделать:

Написать функцию, принимающую два указателя на int и меняет местами содержимое данных указателей.*/

#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a=10;
    int b=20;

    cout << a << " " << b << endl;

    swap(&a, &b);

    cout << a << " " << b;
}
