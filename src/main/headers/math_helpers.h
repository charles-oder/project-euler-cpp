#ifndef MATH_HELPERS_H
#define MATH_HELPERS_H

#include <stdlib.h>
#include <cmath>
#include <string>

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

template <class T>
bool isPalindrome(T value) {
    string str = to_string(value);
    int n = str.length();
    string reverse = str;
    for (int i = 0; i < n / 2; i++) {
        swap(reverse[i], reverse[n - i - 1]); 
    }

    return str == reverse; //.compare(reverseString) == 0;
}


template <class T>
T largestPalindromeProduct(T max) {
    T largest = 0;
    for (T i = max; i > 0; i--) {
        for (T j = max; j > 0; j--) {
            T product = i * j;
            if (isPalindrome(product) && product > largest) {
                largest = product;
            }
        }
    }
    return largest;
}
#endif
