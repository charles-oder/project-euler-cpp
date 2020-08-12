#include <cassert>
#include "test-util.cpp"
#include <vector>
#include <functional>

using namespace std;

namespace euler {
    class Group1 {
        public:
        void runTestSuite() {
            initializeTests();
            for (function<void()> test : tests) {
                test();
            }
        }
        vector<function<void()>> tests;

        void initializeTests() {
            // If we list all the natural numbers below 10 that are
            // multiples of 3 or 5, we get 3, 5, 6 and 9. 
            // The sum of these multiples is 23.
            // Find the sum of all the multiples of 3 or 5 below 1000.
            tests.push_back([](){
                long correctAnswer = 233168;
                long answer = 0;
                for (int i = 3; i < 1000; i++) {
                    if (i % 3 == 0 || i % 5 == 0) {
                        answer += i;
                    }
                }
                ASSERT_EQUAL(answer, correctAnswer);
            });

            // Each new term in the Fibonacci sequence is generated by adding 
            // the previous two terms. By starting with 1 and 2, the first 10 
            // terms will be:

            //     1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

            // By considering the terms in the Fibonacci sequence whose values 
            // do not exceed four million, find the sum of the even-valued terms.
            tests.push_back([](){
                long correctAnswer = 4613732;
                long answer = 0;
                long previous = 1;
                long current = 2;

                do {
                    if (current % 2 == 0) {
                        answer += current;
                    }
                    long temp = current;
                    current = current + previous;
                    previous = temp;
                } while (current <= 4000000);
                
                ASSERT_EQUAL(answer, correctAnswer);
            });
        }
    };
}
