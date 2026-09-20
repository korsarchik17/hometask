#include <iostream>  //библиотека для ввода и вывода

void my_sort(int *arr, const int size); // обЪявление функции сортировки

int main() { //главная функция программы
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int *arr = new int[size];

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Первоначальный массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    my_sort(arr, size);
    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
    return 0;
}

void my_sort(int *arr, const int size) { //функция сортировки
    for (int i = 0; i < size - 1; i++) { //внешний цикл 
        for (int j = 0; j < size - 1 - i; j++) { //сравниваем соседние элементы
            if (arr[j] > arr[j+1]) { //если левый больше правого
                int temp = arr[j]; //временно сохраняем его
                arr[j] = arr[j+1]; // ставим правый на левое место
                arr[j+1] = temp; //ставим сохраненный эл на правое место
            }
        }
    }
}