// Problem Name: Intersection of Two Arrays II
// Difficulty: Easy
// Runtime: 5 ms, faster than 69.56% of C++ online submissions for Intersection of Two Arrays II.
// Memory Usage: 10 MB, less than 93.94% of C++ online submissions for Intersection of Two Arrays II.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
   vector<int> nums3;
   sort(nums1.begin(), nums1.end());
   sort(nums2.begin(), nums2.end());
   int n1 = nums1.size();
   int n2 = nums2.size();
   int i = 0, j = 0;
   while(i < n1 && j < n2){
       if(nums1[i] == nums2[j]){
           nums3.push_back(nums1[i]);
           i++;
           j++;
       }
       else if(nums1[i] < nums2[j]) i++;
       else j++;
   }
   return nums3;
}

int main(){
    vector<int> arr1 = {1,2,2,1};
    vector<int> arr2 = {2,2};
    vector<int> arr3 = intersect(arr1, arr2);

    for(auto i : arr3){
        cout << i << "\t";
    }

    return 0;

}