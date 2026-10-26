#include <iostream>

void inputNumbers(int numbers[], const int size);
bool check(const int numbers[], const int size);

int main() {
    const int arr_size = 10;
    int numbers[arr_size];
    inputNumbers(numbers, arr_size);
    if (check(numbers, arr_size)) {
        std::cout << "последовательность возрастающая" << std::endl;
    } else {
        std::cout<< "последовательность не возрастающая" << std::endl;
    }

    return 0;
}

void inputNumbers(int numbers[], const int size) {
    for (int index = 0; index < size; index++) {
        std::cout << "Введите  " << index+1 << " элемент" << std::endl;
        std::cin >> numbers[index];
    }
}

bool check(const int numbers[], const int size) {
    bool isSorted = true;
    int index = 0;
    while (isSorted == 1 && index < 9) {
        if (numbers[index] <= numbers[index + 1]) {
            isSorted = true;
        } else if (numbers[index] > numbers[index + 1]) {
            isSorted = false;
        }
        index++;
    }
    return isSorted;
}
