// HackerRank Problem Name: Picking Numbers
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

int pickingNumbers(vector<int>& nums){
    // Sort the array for easy calculation of sub array length
    sort(nums.begin(), nums.end());
    int maxLen = 0, len = 0;
    int prev = nums[0];

    for(int i = 1; i < nums.size(); i++){
        // You check whether the subarray elements have difference <= 1
        // The way we ensure that is to always have the prev to be the smallest number in the subarray
        if(abs(prev - nums[i]) <= 1){
            // So, you select whichever is mininum between the elements and keep the prev to be that
            // Increase the current subarray len and check if this subarray is largest so far by taking the max of lens overall
            prev = min(prev,nums[i]);
            len += 1;
            maxLen = max(maxLen, len);
            continue;
        }
        else{
            // If the difference > 1, then subarray ends there and reset the len variable to start counting for new subarray
            prev = nums[i];
            len = 0;
            continue;
        }
    }
    // We return maxLen + 1 because we started the loop at index 1, so we add the additional 1 element missed at the end
    return maxLen+1;
}

int main(){
    vector<int> nums = {1,1,2,2,4,4,5,5,5};
    cout << pickingNumbers(nums);
    return 0;
}