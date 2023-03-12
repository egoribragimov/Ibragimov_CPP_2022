#include <iostream>

using namespace std;

void FillArray(int array[], int size) {
    for (int i = 0; i < size; i++) cin >> array[i];
}

void PrintArray(int array[], int size) {
    for (int i = 0; i < size; i++) cout << array[i] << " ";
}

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) Swap(&array[j], &array[j + 1]);
        }
    }
}

void CocktailSort(int array[], int size) {
    bool swapped = true;
    int start = 0;
    int end = size - 1;
    while (swapped) {
        // проход слева направо
        swapped = false;
        for (int i = start; i < end; i++) {
            if (array[i] > array[i + 1]) {
                Swap(&array[i], &array[i + 1]);
                swapped = true;
            }
        }
        // если не было обменов, значит массив уже отсортирован
        if (!swapped) {
            break;
        }
        // сужаем диапазон справа
        end--;
        // проход справа налево
        swapped = false;
        for (int i = end - 1; i >= start; i--) {
            if (array[i] > array[i + 1]) {
                Swap(&array[i], &array[i + 1]);
                swapped = true;
            }
        }
        // расширяем диапазон слева
        start++;
    }
}

void SelectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minimalIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minimalIndex]) {
                minimalIndex = j;
            }
        }
        Swap(&array[i], &array[minimalIndex]);
    }
}

void InsertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int j = i - 1;
        while (j >= 0 && array[j] > array[j + 1]) {
            Swap(&array[j], &array[j + 1]);
            j--;
        }
    }
}

void QuickSort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        QuickSort(array, low, j);
    if (i < high)
        QuickSort(array, i, high);
}

int main() {

}