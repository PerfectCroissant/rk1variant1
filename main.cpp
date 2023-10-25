#include <iostream>
using namespace std;

int main() { 
    const int size = 10; // размер массива
    int sum = 0; // переменная для хранения суммы
    int numbers[size]; // объявляем массив 
    cout << "Enter " << size << " elements";
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i]; // пользователь вводит 10 элементов
        sum += numbers[i]; //добавляем текущий элемент к сумме
    }
    cout << "You have entered: ";
    for (int i = 0; i < size; i++) // вывод элементов массива на экран
    {
        cout << numbers[i] << ' '; 
    }
    cout << endl << "Sum of elements: " << sum << endl; // вывод суммы всех элементов массива
    for (int i = 0; i < size - 1; i++) {      // Начало сортировки
        int minIndex = i; // запомним индекс текущего элемента
        for (int j = i + 1; j < size; j++) {     // найдем индекс элемента с меньшим значением
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j; // запоминаем индекс элемента с меньшим значением
            }
        }
        int temp = numbers[i]; // вводим переменную для обмена значениями
        numbers[i] = numbers[minIndex]; // меняем элементы местами
        numbers[minIndex] = temp;
    } // Конец сортировки
    cout << "Minimum element: "<< numbers[0] << endl; // вывод минимального элемента
    cout << "Sorted array of your numbers: ";
    for (int i = 0; i < size; i++) {   // вывод отсортированных элементов массива на экран
        cout << numbers[i] << ' '; 
    }
}


