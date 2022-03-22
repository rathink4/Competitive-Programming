// Problem Name: Reverse Linked List
// Difficulty: Easy
// Runtime: 9 ms, faster than 47.40% of C++ online submissions for Reverse Linked List.
// Memory Usage: 8.2 MB, less than 80.45% of C++ online submissions for Reverse Linked List.
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

ListNode* reverseList(ListNode* head) {
    if(head == NULL) return head;
    ListNode* prev = NULL;
    ListNode* temp;

    while(head != NULL){
        temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }

    return prev;

}

int main(){
    ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);

    ListNode* revHead = reverseList(head);
    while(revHead != NULL){
        cout << revHead->val << "\t";
        revHead = revHead->next;
    }

    return 0;
}