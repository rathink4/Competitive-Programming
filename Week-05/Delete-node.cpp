// Problem Name: Delete Node in a Linked List
// Difficulty: Easy
// Runtime: 17 ms, faster than 44.44% of C++ online submissions for Delete Node in a Linked List.
// Memory Usage: 7.7 MB, less than 40.13% of C++ online submissions for Delete Node in a Linked List.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

ListNode* newNode(int data){
    ListNode* temp = new ListNode;
    temp->val = data;
    temp->next = NULL;
    return temp;
}

void deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

int main(){
    ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    deleteNode(head->next->next);

    while(head != NULL){
        cout << head->val << "\t";
        head = head->next;
    }

    return 0;
}