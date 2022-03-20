// Problem Name: Same Tree
// Difficulty: Easy
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Same Tree.
// Memory Usage: 9.8 MB, less than 95.11% of C++ online submissions for Same Tree.
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

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == NULL && q == NULL) return true;
    if(p == NULL || q == NULL) return false;

    return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));

}

int main(){
    TreeNode* p = newNode(1);
    p->left = newNode(2);
    p->right = newNode(3);
    // p->right->left = newNode(15);
    // p->right->right = newNode(7);

    TreeNode* q = newNode(1);
    q->left = newNode(2);
    q->right = newNode(3);
    // q->right->left = newNode(15);
    // q->right->right = newNode(7);

    cout << isSameTree(p, q);

    return 0;
}