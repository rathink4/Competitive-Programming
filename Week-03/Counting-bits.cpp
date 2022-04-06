// Problem Name: Counting Bits
// Difficulty: Easy
// Runtime: 3 ms, faster than 95.63% of C++ online submissions for Counting Bits.
// Memory Usage: 8.4 MB, less than 35.15% of C++ online submissions for Counting Bits.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

vector<int> countBits(int n) {
    vector<int> out;

    for(int i = n; i >= 0; i--){
        uint32_t num = n;
        out.push_back(__builtin_popcount(num));
        n -= 1;
    }
    reverse(out.begin(), out.end());
    return out;
}

int main(){
    vector<int> arr;
    arr = countBits(5);
    for(auto i : arr){
        cout << i << "\n";
    }
    return 0;
}