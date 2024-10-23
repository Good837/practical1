//
// Created by Redmi on 18.10.2024.
//

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <stdexcept>

template<typename T>
class Vector {
private:
    T* array;
    int size;
    int capacity;

public:
    Vector() : size(0), capacity(10) {
        array = new T[capacity];
    }

    ~Vector() {
        delete[] array;
    }

    int getSize() const {
        return size;
    }

    int getCapacity() const {
        return capacity;
    }

    void push_back(const T& element) {
        if (size == capacity) {
            resize();
        }
        array[size] = element;
        size++;
    }

    void pop_back() {
        if (size > 0) {
            size--;
        }
    }

    T at(int index) const {
        if (index >= 0 && index < size) {
            return array[index];
        }
        throw std::out_of_range("Index out of range");
    }

    T& operator[](int index) {
        if (index >= 0 && index < size) {
            return array[index];
        }
        throw std::out_of_range("Index out of range");
    }

private:
    void resize() {
        capacity *= 2;
        T* newArray = new T[capacity];
        for (int i = 0; i < size; i++) {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
    }
};

#endif // VECTOR_H
