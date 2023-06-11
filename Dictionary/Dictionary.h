#ifndef IBRAGIMOV_CPP_2022_DICTIONARY_H
#define IBRAGIMOV_CPP_2022_DICTIONARY_H

#include <string>

const int TABLE_SIZE = 100; // Размер хеш-таблицы

struct Node {
    std::string key;
    std::string value;
    Node* next;
};

class Dictionary {
private:
    Node* table[TABLE_SIZE]{}; // Хеш-таблица

public:
    Dictionary(); // Конструктор
    ~Dictionary(); // Деструктор

    void insert(const std::string& key, const std::string& value); // Вставка элемента
    std::string search(const std::string& key); // Поиск элемента
    void remove(const std::string& key); // Удаление элемента
};

#endif //IBRAGIMOV_CPP_2022_DICTIONARY_H
