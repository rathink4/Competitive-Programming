// Problem Name: Power of two
// Difficulty: Easy
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Power of Two.
// Memory Usage: 5.9 MB, less than 26.21% of C++ online submissions for Power of Two.
// g++ -std=c++11 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n<=0) return false;
    // Basically, any power of 2 will always have compulsoryily 1 true bit
    // Eg: 8 = 0000 1000, 4 = 0000 0100
    // We do n & n-1 because n-1 will not be a power of 2 and doing AND operation will result in 0
    // Eg: 8 = 0000 1000, 7 = 0000 0111 ---> 8 & 7 = 0000 0000
    // This is true for any case 
    return ((n&(n-1)) == 0);
}


int main(){
    int n = 2097152;
    cout << isPowerOfTwo(n);
    return 0;
}