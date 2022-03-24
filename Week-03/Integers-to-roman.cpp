// Problem Name: Integer to Roman
// Difficulty: Medium
// Runtime: 19 ms, faster than 28.06% of C++ online submissions for Integer to Roman.
// Memory Usage: 12.7 MB, less than 11.04% of C++ online submissions for Integer to Roman.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
    map<int, string> romans = {{1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"}, 
    {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}};
    
    string s = "";

    auto it = romans.rbegin();
    while(num){
        while(num/it->first > 0){
            s += it->second;
            num -= it->first;
        }
        it++;
    }

    return s;
}

int main(){
    cout << intToRoman(3);
    return 0;
}