/*Задача 2.

Что нужно сделать:

Написать функцию, которая принимает указатель на тип int, по которому размещены 10 переменных типа int. Функция ничего не возвращает, но по тому же указателю элементы должны лежать в обратном порядке.

Чек-лист для проверки задачи

Функция принимает корректные типы данных, тип возвращаемого значения --  void
        Функция не использует библиотек кроме <iostream>
По переданному указателю лежат переменные в обратном порядке*/

#include <iostream>

using namespace std;

void change (int *pArray)
{
    for (int i=0; i<5; i++)
    {
        int temp = *(pArray + i);
        *(pArray + i) = *(pArray + 9 - i);
        *(pArray + 9 - i) = temp;
    }
}

int main() {
    int array[10]  = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    change(array);

    for (int i=0; i<10; i++)
    {
        cout << array[i] << " ";
    }
}
