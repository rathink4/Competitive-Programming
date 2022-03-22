// Problem Name: Remove Linked List Elements
// Difficulty: Easy
// Runtime: 47 ms, faster than 15.30% of C++ online submissions for Remove Linked List Elements.
// Memory Usage: 15.1 MB, less than 28.12% of C++ online submissions for Remove Linked List Elements.
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

ListNode* removeElements(ListNode* head, int val) {
    if(!head) return head;

    while(head && head->val == val){
        ListNode* removeNode = head;
        head = head->next;
        delete removeNode;
    }
    
    ListNode* curr = head;
    ListNode* prev = NULL;

    while(curr){
        if(curr->val == val){
            ListNode* removeNode = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete removeNode;
        }
        else{
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

int main(){
    ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(2);
    head->next->next->next = newNode(3);

    // ListNode* head = NULL;

    ListNode* printer = removeElements(head, 2);

    if(printer == NULL) cout << "Empty List";
    
    while(printer != NULL){
        cout << printer->val << "\t";
        printer = printer->next;
    }


    return 0;
}