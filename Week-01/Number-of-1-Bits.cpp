// Problem Name: Number of 1 Bits
// Difficulty: Easy
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of 1 Bits.
// Memory Usage: 6 MB, less than 48.05% of C++ online submissions for Number of 1 Bits.

#include <bits/stdc++.h>
#include<stdint.h>
#include <inttypes.h>
using namespace std;

int hammingWeight(uint32_t n){
    //Iterate through the 32 bit unsigned number and check each bit equals to 1, increment count
    int count = 0;
    for(int i = 0; i < 32; i++){
        if (n & (1<<i)) count++;
    }
    return count;
    // Alternatively, just use built in C++ function for counting 1s in an unsigned number
    // return __builtin_popcount(n);
}

int main(){
    uint32_t n = 0;
    cout << "Enter unsigned number: ";
    scanf("%u", &n);
    cout << "Number of 1 bits = " << hammingWeight(n);
}