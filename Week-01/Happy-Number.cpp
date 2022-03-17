// Problem Name: Happy Number
// Difficulty: Easy
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Happy Number.
// Memory Usage: 6.3 MB, less than 24.45% of C++ online submissions for Happy Number.
// g++ -std=c++11 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

bool isHappy(int n) {
    // Create an unordered_map to store a record of the previously calculated numbers
    unordered_map<int,int> mp;
    // Check if the value has already calculated previously
    // If the value isn't calculated, then flag as calculated and do the calculation
    // Return true if it is 1, else iterate again
    while(mp.find(n) == mp.end()){
        mp[n]++;
        int sum = 0;
        while(n){
            sum += (n%10)*(n%10);
            n /= 10;
        }
        if(sum == 1) return true;
        n = sum;
    }
    return false;
}

int main(){
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;
    if(isHappy(n)) cout << "It is a happy number!!";
    else cout << "It is not a happy number :/";
    return 0;
}