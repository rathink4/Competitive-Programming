// Problem Name: String To Integer (atoi)
// Difficulty: Medium
// Runtime: 8 ms, faster than 25.81% of C++ online submissions for String to Integer (atoi).
// Memory Usage: 7.3 MB, less than 7.60% of C++ online submissions for String to Integer (atoi).
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    stringstream ss(s);
    int res = 0;
    ss >> res;
    return res;
}

int main(){
    string s = "    -42";
    cout << myAtoi(s);
    return 0;
}