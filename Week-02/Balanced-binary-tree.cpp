// Problem Name: balanced Binary Tree
// Difficulty: Easy
// Runtime: 12 ms, faster than 81.21% of C++ online submissions for Balanced Binary Tree.
// Memory Usage: 21.8 MB, less than 7.60% of C++ online submissions for Balanced Binary Tree.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

//I checked NeetCode's Youtube video for this => ~Balanced Binary Tree - Leetcode 110 - Python~

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

// Essentially, we are recursively going from bottom to up the tree and trying to find whether a node is balanced or not
// We also record the height of the subtree/node from each branch to the parent node to deal with height issues

pair<bool, int> dfs(TreeNode* root){
    // Base case:- you found the leaf node, i.e.- node with no parent
    // It is always balanced and height for it is 0
    if(root == NULL){
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    // You check the left and right subtree of the parent node and get the data about it
    pair<bool, int> left = dfs(root->left);
    pair<bool, int> right = dfs(root->right);

    // A parent node is balanced if the following condition satisfies
    // (Left subtree, Right subtree) = Balanced, and Diff. between height of these subtree <=1  
    bool balanced = (left.first && right.first && abs(left.second-right.second) <= 1);

    // Parent node height is the max of either the left or the right subtree (+ 1 because we keeping left node height = 0)
    int treeHeight = max(left.second, right.second) + 1;

    pair<bool, int> ret = make_pair(balanced, treeHeight);

    return ret;
}

bool isBalanced(TreeNode* root) {
    // We simply call the previous function and then check whether root is balanced or not
    pair<bool, int> ans = dfs(root);
    return ans.first;
}

int main(){
    TreeNode* root = newNode(3);
    root->left = newNode(9);
    root->right = newNode(20);
    root->right->left = newNode(15);
    root->right->right = newNode(7);

    cout << isBalanced(root);

    return 0;
}