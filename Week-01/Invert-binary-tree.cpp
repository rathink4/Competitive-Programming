// Problem Name: Invert binary tree
// Difficulty: Easy
// Runtime: 3 ms, faster than 66.77% of C++ online submissions for Invert Binary Tree.
// Memory Usage: 9.8 MB, less than 39.44% of C++ online submissions for Invert Binary Tree.
// g++ -std=c++11 -o your-output_exe-name source_file.cpp

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

TreeNode* invertTree(TreeNode* root) {
    if(root == NULL) return root;
    TreeNode* temp = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(temp);
    return root;
}

void inOrderPrint(TreeNode* root){
    if(root == NULL) return;
    inOrderPrint(root->left);
    cout << root->val << "\n";
    inOrderPrint(root->right);
}

int main(){
    TreeNode* root = newNode(2);
    root->left = newNode(1);
    root->right = newNode(3);

    cout << "Before Inverting:- \n"; 
    inOrderPrint(root);
    
    invertTree(root);

    cout << "After Inverting:- \n"; 
    inOrderPrint(root);
    return 0;
}