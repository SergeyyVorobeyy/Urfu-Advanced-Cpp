#pragma once

#include <cstddef>
#include <vector>

class CircularQueue {
private:
    std::vector<int> buffer; // буфер для хранения элементов
    size_t head; // индекс начала очереди
    size_t tail; // индекс конца очереди
    size_t maxSize; // максимальный размер очереди
    size_t currentSize; // текущий размер очереди
public:
    CircularQueue(size_t size); // создать очередь с определенным размером буффера
    bool Push(int value); // добавить значение в конец очереди (false, если очередь заполнена)
    bool Pop(); // удалить значение из начала очереди (false, если очередь пустая)
    int Front() const; // получить значение из начала очереди (-1, если очередь пустая)
    int Back() const; // получить значение из конца очереди (-1, если очередь пустая)
    bool Empty() const; // проверить пустая ли очередь
    bool Full() const; // проверить заполнена ли очередь
};
