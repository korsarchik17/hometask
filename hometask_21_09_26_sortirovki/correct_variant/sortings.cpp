#include "sortings.hpp"

void biv::my_sort(int* const arr, const int size) {
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