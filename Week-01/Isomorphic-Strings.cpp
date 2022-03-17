// Problem Name: Isomorphic Strings
// Difficulty: Easy
// Runtime: 4 ms, faster than 92.38% of C++ online submissions for Isomorphic Strings.
// Memory Usage: 7 MB, less than 48.16% of C++ online submissions for Isomorphic Strings.
// g++ -std=c++11 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

//We need one-to-one mapping, so make two dictionary
//dict_s_t = maps from s to t
//dict_t_s = maps from t to s
map<char,char> dict_s_t;
map<char,char> dict_t_s;

bool isIsomorphic(string s, string t) {
    //Iterate through the string and check if the char map exist
    //If yes, check if there is one-to-one mapping; True = loop : False = return false
    //End of loop means strings are Isomorphic and return true
    for(int i = 0; i < s.length(); i++){
        if(dict_s_t.count(s[i]) || dict_t_s.count(t[i])){
            if(dict_s_t[s[i]] == t[i] && dict_t_s[t[i]] == s[i]) continue;
            else return false;
        }
        else {
            dict_s_t[s[i]] = t[i];
            dict_t_s[t[i]] = s[i];
        }
    }
    return true;
}

int main(){
    string s = "egg";
    string t = "add";
    cout << isIsomorphic(s, t);
    return 0;
}