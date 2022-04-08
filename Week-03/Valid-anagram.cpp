// Problem Name: Valid Anagram
// Difficulty: Easy
// Runtime: 17 ms, faster than 32.71% of C++ online submissions for Valid Anagram.
// Memory Usage: 7.2 MB, less than 78.49% of C++ online submissions for Valid Anagram.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() == 1 && t.length() == 1){
        if(s[0] == t[0]) return true;
        else return false;
    }
    if(s.length() != t.length()) return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for(int i = 0; i < s.length(); i++){
        if(s[i] != t[i]) return false;
    }
    return true;        
}

int main(){
    string s = "applepenapple";
    string t = "penappleappel";
    cout << isAnagram(s, t);
    return 0;    
}