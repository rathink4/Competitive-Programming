// Problem Name: Count & Say
// Difficulty: Medium
// Runtime: 12 ms, faster than 47.87% of C++ online submissions for Count and Say.
// Memory Usage: 6.7 MB, less than 57.84% of C++ online submissions for Count and Say.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
    if(n == 1) return "1";
    string in = countAndSay(n-1);
    int count = 0;
    string out = "";
    
    for(int i = 0; i < in.length(); i++){
        if(i != 0 && (in[i] != in[i-1])){
            out += to_string(count) + in[i-1];
            count = 0;
        }
        count++;
    }

    out += to_string(count) + in[in.length()-1];

    return out;
}

int main(){
    cout << countAndSay(4);
    return 0;
}