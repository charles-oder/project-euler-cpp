#ifndef MATH_HELPERS_H
#define MATH_HELPERS_H

#include <stdlib.h>
#include <cmath>

template <class T>
bool isPrime(T value) {
    T max = sqrt(value);
    for (T i = 2; i <= max; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}
#endif
