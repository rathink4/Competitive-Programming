// Problem Name: Is Sequence
// Difficulty: Medium
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Is Subsequence.
// Memory Usage: 6.2 MB, less than 88.13% of C++ online submissions for Is Subsequence.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    if(s.length() == 0) return true;
    int i = 0, j=0;
    while(i < t.length() && t.length()){
        if(s[j] == t[i]){
            i++;
            j++;
            if(j == s.length()) return true;
            else continue;
        }
        i++;
    }
    return false;  
}

int main(){
    string s = "";
    string t = "ahbgdc";
    cout << isSubsequence(s, t);
    return 0;
}