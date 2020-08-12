#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <cassert>
#include <exception>
#include <iostream>

using namespace std;

#ifndef NDEBUG
#   define ASSERT(condition, message) \
    do { \
        if (! (condition)) { \
            std::cerr << "Assertion `" #condition "` failed in " << __FILE__ \
                      << " line " << __LINE__ << ": " << message << std::endl; \
            std::terminate(); \
        } \
    } while (false)
#   define ASSERT_EQUAL(first, second) \
    do { \
        if (! (first == second)) { \
            std::cerr << "Assertion `" << first << " == " << second << "` failed in " \
            << __FILE__ << " line " << __LINE__ << std::endl; \
            std::terminate(); \
        } \
    } while (false)
#else
#   define ASSERT(condition, message) do { } while (false)
#   define ASSERT_EQUAL(condition, message) do { } while (false)
#endif
