#include <iostream>  
#include "io.hpp"
#include "sortings.hpp" 

int main() { //главная функция программы
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int *arr = new int[size];

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    
    biv::print_array("Массив до сортировки: ", arr, size);

    biv::my_sort(arr, size);

    biv::print_array("Массив после сортировки: ", arr, size);

    delete[] arr;
    return 0;
}


