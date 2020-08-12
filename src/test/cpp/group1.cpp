#include <cassert>
#include "test-util.cpp"

using namespace std;

namespace euler {
    class Group1 {
        public:
        void runTestSuite() {
            testCase1();
        }

        // If we list all the natural numbers below 10 that are
        // multiples of 3 or 5, we get 3, 5, 6 and 9. 
        // The sum of these multiples is 23.
        // Find the sum of all the multiples of 3 or 5 below 1000.
        void testCase1() {
            long correctAnswer = 233168;
            long answer = 0;
            for (int i = 3; i < 1000; i++) {
                if (i % 3 == 0 || i % 5 == 0) {
                    answer += i;
                }
            }
            ASSERT_EQUAL(answer, correctAnswer);
        }
    };
}
