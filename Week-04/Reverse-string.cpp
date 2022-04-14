// Problem Name: Reverse String
// Difficulty: Easy
// Runtime: 15 ms, faster than 97.64% of C++ online submissions for Reverse String.
// Memory Usage: 23.3 MB, less than 41.86% of C++ online submissions for Reverse String.
// g++ -std=c++11 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int i = 0, j = s.size() - 1;
    for(i = 0; i <= j; i++){
        char temp1 = s[i];
        char temp2 = s[j];
        s[i] = temp2;
        s[j] = temp1;
        j -= 1;
    }
}

int main(){
    vector<char> sarr = {'a'};
    reverseString(sarr);
    for(auto i : sarr){
        cout << i << "\t";
    }
    return 0;
}