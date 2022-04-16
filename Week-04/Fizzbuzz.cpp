// Problem Name: FizzBuzz
// Difficulty: Easy
// Runtime: 7 ms, faster than 25.65% of C++ online submissions for Fizz Buzz.
// Memory Usage: 7.9 MB, less than 65.17% of C++ online submissions for Fizz Buzz.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> out;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0) out.push_back("FizzBuzz");
        else if (i % 3 == 0) out.push_back("Fizz");
        else if (i % 5 == 0) out.push_back("Buzz");
        else out.push_back(to_string(i));
    }
    return out;
}

int main(){
    int in = 15;
    vector<string> o = fizzBuzz(in);
    for(auto i : o){
        cout << i << "\t";
    }
    return 0;
}