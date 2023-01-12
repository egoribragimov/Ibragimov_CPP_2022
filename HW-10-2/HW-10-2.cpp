#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
        cin >> array[i];

    int shiftLeft;
    cin >> shiftLeft;

    int *first = array;
    int *middle = array + shiftLeft;
    int *last = array + size - 1;

    int *next = middle;
    while (first != next) {
        swap(*first++, *next++);
        if (next == last + 1)
            next = middle;
        else if (first == middle)
            middle = next;
    }

    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    return 0;
}