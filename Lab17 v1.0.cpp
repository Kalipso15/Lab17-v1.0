#include <iostream>
#include <vector>
#include<windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Исходные матрицы A и B
    int A[3][3] = { {1, 2, 6}, {11, 5, 9}, {7, 8, 5} };
    int B[4][4] = { {1, 88, 3, 45}, {5, 46, 7, 6}, {7, 20, 11, 52}, {45, 14, 75, 86} };

    // Создание новых массивов для сумм элементов строк
    vector<int> sumA;
    vector<int> sumB;

    // Вычисление сумм элементов для матрицы A
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += A[i][j];
        }
        sumA.push_back(rowSum);
    }

    // Вычисление сумм элементов для матрицы B
    for (int i = 0; i < 4; i++) {
        int rowSum = 0;
        for (int j = 0; j < 4; j++) {
            rowSum += B[i][j];
        }
        sumB.push_back(rowSum);
    }

    // Вывод результатов
    cout << "Суммы элементов строк для матрицы A:" << endl;
    for (int i = 0; i < sumA.size(); i++) {
        cout << sumA[i] << " ";
    }
    cout << endl;

    cout << "Суммы элементов строк для матрицы B:" << endl;
    for (int i = 0; i < sumB.size(); i++) {
        cout << sumB[i] << " ";
    }
    cout << endl;

    return 0;
}
