#include<stdio.h>
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