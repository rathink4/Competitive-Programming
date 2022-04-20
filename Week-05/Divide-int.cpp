// Problem Name: Divide Two Integers
// Difficulty: Medium
// Runtime: 1827 ms, faster than 5.02% of C++ online submissions for Divide Two Integers.
// Memory Usage: 6 MB, less than 30.86% of C++ online submissions for Divide Two Integers.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor) {
    // Check edge case of INT_MIN -> INT_MAX rollover
    if(divisor == -1 && dividend == INT_MIN)
        return INT_MAX;
    // Check if divisor is 1
    else if (divisor == 1)
        return dividend;
    // Check if divisor is -1
    else if(divisor == -1)
        return -dividend;

    // Check if quotient will be positive or negative
    bool is_pos = ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0));
    
    // Construct variable to store quotient
    int quotient = 0;

    // Take absolute values of integers & cast as unsigned to follow condition in while loop
    unsigned int n = abs(dividend);
    unsigned int d = abs(divisor);
    
    // Decrement dividend until <= divisor
    while(n >= d) {
        n -= d;
        quotient++;         
    }
    
    // Return signed quotient
    return is_pos ? quotient : -quotient;
}

int main(){

    cout << divide(10, 3);
    return 0;

}