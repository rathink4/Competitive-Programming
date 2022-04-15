// Problem Name: First Unique Character in a String
// Difficulty: Easy
// Runtime: 69 ms, faster than 26.02% of C++ online submissions for First Unique Character in a String.
// Memory Usage: 10.9 MB, less than 14.96% of C++ online submissions for First Unique Character in a String.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    map<char, int> hash;
    for(int i = 0; i < s.length(); i++){
        hash[s[i]]++;
    }

    for(int i = 0; i < s.length(); i++){
        if(hash[s[i]] == 1) return i;
    }

    return -1;

}

int main(){
    string st = "competitiveprogramming";
    cout << firstUniqChar(st);
    return 0;
}