// Problem Name: Find First and Last Position of Element in Sorted Array
// Difficulty: Medium
// Runtime: 8 ms, faster than 78.24% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
// Memory Usage: 13.6 MB, less than 65.62% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    auto a = lower_bound(nums.begin(), nums.end(), target);
    auto b = upper_bound(nums.begin(), nums.end(), target);
    if(a-nums.begin() == nums.size() || nums[a-nums.begin()] != target){
        vector<int> arr = {-1,-1};
        return arr;
    }
    int begin = a - nums.begin();
    int end = b - nums.begin() - 1;
    vector<int> arr = {begin, end};
    return arr; 
}

int main(){
    vector<int> arrayy = {5,7,7,8,8,10};
    vector<int> a = searchRange(arrayy, 6);
    cout << a[0] << "\t" << a[1];
    return 0;
}