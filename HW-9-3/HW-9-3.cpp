#include <iostream>

using namespace std;

void FillMatrix(int matrix[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
}

void PrintMatrix(int matrix[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void MultiplicationMatrix(int firstMatrix[5][5], int secondMatrix[5][5]) {
    int resultMatrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < 5; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int firstMatrix[5][5];
    int secondMatrix[5][5];
    FillMatrix(firstMatrix);
    FillMatrix(secondMatrix);
    MultiplicationMatrix(firstMatrix, secondMatrix);
    return 0;
}