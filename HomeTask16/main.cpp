#include<iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    setlocale(LC_ALL, "RU");
    std::cout << "Задача 1\n";
    int arr[10]; 
    int sum = 0; 
        for (int i = 0; i < 10; i++) {
            std::cout << "Введите элемент " << i << ": ";
            std::cin >> arr[i];
            sum += arr[i]; 
        }
    double average = sum / 10.0;
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] < average) {
            count++;
        }
    }
    std::cout << "Среднее арифметическое: " << average << "\n";
    std::cout << "Количество элементов, значение которых меньше среднего арифметического: " << count << "\n";
    std::cout << "Задача 2\n";
    int arr1[5][5]; 
    int arr2[5][5];
    int result[5][5]; 
    std::cout << "Первый массив:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << "Введите элемент (" << i << ", " << j << "): ";
            std::cin >> arr1[i][j];
        }
    }
    std::cout << "Второй массив:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << "Введите элемент (" << i << ", " << j << "): ";
            std::cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    std::cout << "Результат сложения:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << "\n\n";
    }
    std::cout << "Задача 3\n";
    std::string input;
    std::cout << "Введите шестизначное число: ";
    std::cin >> input;
        if (input.length() != 6) {
            std::cout << "Введено неверное число!\n";
            return 0;
        }
    int arr6[6]; 
    for (int i = 0; i < 6; i++) {
        arr6[i] = input[i] - '0';
    }
    for (int i : arr6) {
        std::cout << i << " ";
    }
    std::cout << "\n\n";













































    return 0;
}