// Problem Name: Minimum Depth of Binary Tree
// Difficulty: Easy
// Runtime: 297 ms, faster than 74.74% of C++ online submissions for Minimum Depth of Binary Tree.
// Memory Usage: 144.7 MB, less than 71.83% of C++ online submissions for Minimum Depth of Binary Tree.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left, *right;
};

TreeNode* newNode(int data)
{
    TreeNode* temp = new TreeNode;
    temp->val = data;
    temp->left = temp->right = NULL;
    return temp;
}

int minDepth(TreeNode* root) {
   if(root == NULL) return 0;
   int h_left = minDepth(root->left);
   int h_right = minDepth(root->right);
   // check if both have some value in it (i.e- they both shouldn't be 0), if they have value then you can send the min of them
   // else send whichever has max value (or even if they both have 0, adding +1 takes care of that case) 
   return (h_left && h_right) ? min(h_left, h_right)+1 : max(h_left, h_right)+1;
}

int main(){
    TreeNode* root = newNode(3);
    //root->left = newNode(9);
    root->right = newNode(20);
    //root->right->left = newNode(15);
    root->right->right = newNode(7);
    root->right->right->right = newNode(7);

    cout << minDepth(root);

    return 0;
}