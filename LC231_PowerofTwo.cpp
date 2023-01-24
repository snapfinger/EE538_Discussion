#include "libs.h"

// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.


// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false
 
// Constraints:
// -2^31 <= n <= 2^31 - 1


// Sol 2: use binary representation
// Time complexity: O(1)
// Space complextiy: O(1)
bool isPowerOfTwo2(int n) {
    return (n > 0) && (not (n & (n - 1)));
}


// Sol 1: with loop
// Time complexity: O(log n)
// Space complexity: O(1)
bool isPowerOfTwo1(int n) {

    if(n <= 0) return false;
    while(n != 1){

        int remainder = n % 2;
        if(remainder) return false;
        n = n / 2;
    }

    return true;
}

int main(){
    cout << isPowerOfTwo1(2) << endl;
}