// Problem Name: Lowest Common Ancestor of a Binary Search Tree
// Difficulty: Easy
// Runtime: 30 ms, faster than 83.54% of C++ online submissions for Lowest Common Ancestor of a Binary Search Tree.
// Memory Usage: 23.2 MB, less than 92.43% of C++ online submissions for Lowest Common Ancestor of a Binary Search Tree.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
#include "BinaryTree.h"
using namespace std;

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(root == NULL) return root;

    if(root->val > p->val && root->val > q->val)
        return lowestCommonAncestor(root->left, p, q);
    
    if(root->val < p->val && root->val < q->val)
        return lowestCommonAncestor(root->right, p, q);

    return root;
        
}

int main(){

    TreeNode* root = newNode(6);
    root->left = newNode(2);
    root->right = newNode(8);
    root->left->left = newNode(0);
    root->left->right = newNode(4);
    root->right->left = newNode(7);
    root->right->right = newNode(9);

    TreeNode* out = lowestCommonAncestor(root, root->left, root->right);
    cout << out->val;

    return 0;
}