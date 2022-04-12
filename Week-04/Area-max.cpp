// Problem Name: Container With Most Water
// Difficulty: Medium
// Runtime: 101 ms, faster than 77.29% of C++ online submissions for Container With Most Water.
// Memory Usage: 58.9 MB, less than 81.71% of C++ online submissions for Container With Most Water.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxa = 0;
    while(left < right){
        int w = right - left;
        int h = min(height[left], height[right]);
        int area = h * w;
        maxa = max(maxa, area);
        if(height[left] < height[right]) left++;
        else if(height[left] > height[right]) right--;
        else {
            left++;
            right--;
        }
    }
    return maxa;
}

int main(){
    vector<int> h = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(h);

    return 0;
}