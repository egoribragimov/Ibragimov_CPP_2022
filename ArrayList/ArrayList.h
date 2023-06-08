#pragma once
#ifndef IBRAGIMOV_CPP_2022_ARRAYLIST_H
#define IBRAGIMOV_CPP_2022_ARRAYLIST_H


class ArrayList {
public:

    ArrayList();
    ~ArrayList();

    void Print() const;

    int Get(int index) const;
    bool TryGet(int index, int& result) const;

    void Append(int element);

    bool InsertAt(int index, int element);
    bool DeleteAt(int index);

private:
int* pData;
int size;
int capacity;
int growFactor;
    void Resize();
    void Copy(int* pTemp);
};


#endif //IBRAGIMOV_CPP_2022_ARRAYLIST_H
