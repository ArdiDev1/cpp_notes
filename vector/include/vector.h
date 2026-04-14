#pragma once

#include <cstddef>
#include <stdexcept>
#include <iterator>

#define INIT_CAP 2

template <typename T>
class vector {
private:
    T* data_;
    size_t size_;
    size_t capacity_;

    void resize(size_t new_cap) {
        auto vec = new T[new_cap];
        std::copy(this->begin(), this->end(), vec);
        
        delete[] data_;
        data_ = vec;
        capacity = new_cap;
    }

public:
    using iterator = T*;

    vector() {
        size_ = 0;
        capacity_ = INIT_CAP;
        data_ = new T[capacity_];
    }

    ~vector() {
        delete[] data_;
    }

    size_t size() const {
        return size_;
    }

    size_t capacity() const {
        return capacity_;
    }

    bool empty() const {
        return size_ == 0;
    }

    iterator begin() {
        return data_;
    }

    iterator end() {
        return data_+ size;
    }

    void push_back(const T& value) {
        if(size_ == capacity_)
            resize(capacity_ * 2);

        data_[size] = value;
        size++;
    }

    T& at(size_t index) {
        return data_[index];   
    }
};