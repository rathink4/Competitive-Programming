// Problem Name: Missing Number
// Difficulty: Easy
// Runtime: 31 ms, faster than 38.54% of C++ online submissions for Missing Number.
// Memory Usage: 18 MB, less than 65.07% of C++ online submissions for Missing Number.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int checker = 0;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        if(checker != nums[i]) return checker;
        checker += 1;
    }
    return checker > nums.size()-1 ? checker : -1;
}

int main(){
    vector<int> n = {0,1};
    cout << missingNumber(n);
    return 0;
}