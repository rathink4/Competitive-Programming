// Problem Name: Remove Nth Node From End of List
// Difficulty: Easy
// Runtime: 9 ms, faster than 27.76% of C++ online submissions for Remove Nth Node From End of List.
// Memory Usage: 10.6 MB, less than 75.74% of C++ online submissions for Remove Nth Node From End of List.
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

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* p1 = head;
    ListNode* p2 = head;
    int count = 0;
    while(count<n){
        p2 = p2->next;
        count++;
    }
    if(!p2){
        ListNode* temp = head->next;
        delete(head);
        return temp;
    }
    while(p2->next){
        p1 = p1->next;
        p2 = p2->next;
    }
    ListNode* temp = p1->next;
    p1->next = p1->next->next;
    delete(temp);
    return head;

}

int main(){
    ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    
    ListNode* out = removeNthFromEnd(head, 2);

    if(out == NULL) cout << "No value to print";
    else{
        while(out != NULL){
            cout << out->val << "\t";
            out = out->next;
        }
    }

    return 0;
}