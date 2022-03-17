// Problem Name: contain Duplicates
// Difficulty: Easy
// Runtime: 88 ms, faster than 89.86% of C++ online submissions for Contains Duplicate.
// Memory Usage: 52.2 MB, less than 34.39% of C++ online submissions for Contains Duplicate.
// g++ -std=c++11 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

map<int,bool> dict;

bool containsDuplicate(vector<int>& nums) {
    for(int i=0; i < nums.size(); i++){
        if(dict.count(nums[i]) && dict[nums[i]]) return true;
        dict[nums[i]] = true;
    }
    return false;

    // Better solution to use HashSet. Just check the size of both the set and the list
    
    // set<int> ans(nums.begin(),nums.end());
    //     return nums.size()>ans.size();
}

int main(){
    vector<int> nums = {1,2,3,4};
    cout << containsDuplicate(nums);
    return 0;
}