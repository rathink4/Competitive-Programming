// Problem Name: Reverse Bits
// Difficulty: Easy
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Bits.
// Memory Usage: 5.7 MB, less than 96.53% of C++ online submissions for Reverse Bits.

#include<bits/stdc++.h>
#include<stdint.h>
#include <inttypes.h>
using namespace std;

uint32_t reverseBits(uint32_t n) {
        uint32_t m = 0;
        // 32 bit unsigned integer, we go in opposite direction to reverse it
        // Eg. 0100, we iterate from left to right, 0 -> 1 -> 0 -> 0
        for(int i = 31; i >= 0; i--){
            //check if i(th) bit is 1, if true insert the i-31(th) bit as 1, else insert as 0
            if(n & (1<<i)) m = m | (1 << 31-i);
            else m = m & ~(1 << 31-i);
        }
        return m;
    }

int main(){
    uint32_t n = 0;
    cout << "Enter the unsigned number: ";
    scanf("%u", &n);
    printf("%u", (unsigned)reverseBits(n));
    return 0;
}