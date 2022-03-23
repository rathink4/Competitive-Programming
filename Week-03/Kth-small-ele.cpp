// Problem Name: Kth Smallest Element in a BST.
// Difficulty: Medium
// Runtime: 20 ms, faster than 76.95% of C++ online submissions for Kth Smallest Element in a BST.
// Memory Usage: 24.4 MB, less than 26.47% of C++ online submissions for Kth Smallest Element in a BST.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
#include "BinaryTree.h"
using namespace std;

vector<int> arr;

void inorderBST(TreeNode* root){
    if(!root) return;
    inorderBST(root->left);
    arr.push_back(root->val);
    inorderBST(root->right);
}

int kthSmallest(TreeNode* root, int k) {
    inorderBST(root);
    return arr[k-1];
}

int main(){

    TreeNode* root = newNode(5);
    root->left = newNode(3);
    root->right = newNode(6);
    root->left->left = newNode(2);
    root->left->right = newNode(4);
    root->left->left->right = newNode(1);

    cout << kthSmallest(root, 3);

    return 0;
}