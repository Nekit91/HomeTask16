#include<iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    setlocale(LC_ALL, "RU");
    std::cout << "������ 1\n";
    int arr[10]; 
    int sum = 0; 
        for (int i = 0; i < 10; i++) {
            std::cout << "������� ������� " << i << ": ";
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
    std::cout << "������� ��������������: " << average << "\n";
    std::cout << "���������� ���������, �������� ������� ������ �������� ���������������: " << count << "\n";
    std::cout << "������ 2\n";
    int arr1[5][5]; 
    int arr2[5][5];
    int result[5][5]; 
    std::cout << "������ ������:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << "������� ������� (" << i << ", " << j << "): ";
            std::cin >> arr1[i][j];
        }
    }
    std::cout << "������ ������:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << "������� ������� (" << i << ", " << j << "): ";
            std::cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    std::cout << "��������� ��������:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << "\n\n";
    }
    std::cout << "������ 3\n";
    std::string input;
    std::cout << "������� ������������ �����: ";
    std::cin >> input;
        if (input.length() != 6) {
            std::cout << "������� �������� �����!\n";
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