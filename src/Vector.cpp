#include "inc/Vector.hpp"

vector::vector(int size)
    : m_size { size },
      m_element { new int[size] } {
    for (size_t i = 0; i < size; ++i) {
        m_element[i] = 0;
    }
}
