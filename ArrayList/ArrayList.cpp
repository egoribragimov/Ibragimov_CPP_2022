#include "ArrayList.h"
#include<iostream>

ArrayList::ArrayList() {
    size = 0;
    capacity = 4;
    growFactor = 2;
    pData = new int[capacity];
}

ArrayList::~ArrayList() {
    delete[] pData;
}

int ArrayList::Get(int index) const {
    if (index < 0 || index >= size) return -1;
    return pData[index];
}

bool ArrayList::TryGet(int index, int &result) const {
    if (index < 0 || index >= size) return false;
    result = pData[index];
    return true;
}

void ArrayList::Append(int element) {
    if (size == capacity) Resize();

    pData[size++] = element;

}

void ArrayList::Resize() {
    capacity = capacity * growFactor;
    int *pTemp = new int[capacity];
    Copy(pTemp);
    delete[] pData;
    pData = pTemp;
}

void ArrayList::Copy(int *pTemp) {
    for (int i = 0; i < size; ++i) pTemp[i] = pData[i];
    /*int sizeInBytes = size * sizeof(int);
    momcpy_s(pTemp, sizeInBytes, pData, sizeInBytes);*/
}

void ArrayList::Print() const {
    for (int i = 0; i < size; i++)
        std::cout << pData[i] << " ";
    std::cout << std::endl;
}

bool ArrayList::InsertAt(int index, int element) {
    if (index < 0 || index >= size) return false;
    if (size == capacity) Resize();
    for (int i = size; i > index; --i) pData[i] = pData[i - 1];
    ++size;
    pData[index] = element;
    return true;
}

bool ArrayList::DeleteAt(int index) {
    if (index < 0 || index >= size) return false;
    for (int i = index; i < size - 1; ++i) pData[i] = pData[i - 1];
    --size;
    return true;
}

