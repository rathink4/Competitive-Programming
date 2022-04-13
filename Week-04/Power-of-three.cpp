// Problem Name: Power of three
// Difficulty: Easy
// Runtime: 31 ms, faster than 47.02% of C++ online submissions for Power of Three.
// Memory Usage: 6 MB, less than 30.35% of C++ online submissions for Power of Three.
// g++ -std=c++11 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n) {
    // MaxInt = (2^32/2)-1 since we use 32 bits to represent the number, half of the range is used for 
    // negative numbers and 0 is part of the positive numbers.
    // Knowing the limitation of n, we can now deduce that the maximum value of n that is also a power of three is 1162261467.
    // How? ==> 3^log3(MaxInt) = 1162261467
    return n > 0 && 1162261467 % n == 0;
}

int main(){
    int n = 45;
    cout << isPowerOfThree(n);
    return 0;
}