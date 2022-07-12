#pragma once

#include <iostream>

class vector {
public:
    int size() const { return m_size; }

    vector(int size);
    vector() : vector(10) {}
    ~vector() { delete[] m_element; }
private:
    /* the size of the vector */
    int m_size { };
    /* Pointer to the element on the heap */
    int* m_element { };
};