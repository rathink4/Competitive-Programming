// Problem Name: Palindrome Linked List
// Difficulty: Easy
// Runtime: 364 ms, faster than 34.84% of C++ online submissions for Palindrome Linked List.
// Memory Usage: 114.1 MB, less than 72.35% of C++ online submissions for Palindrome Linked List
// g++ -std=c++11 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
};

ListNode* newNode(int data){
    ListNode* temp = new ListNode;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

bool isPalindrome(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    // Loop to find the middle of the Linked List. 
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    // slow now points to middle 

    // Code to reverse the second half of the Linked List (after the middle point)
    // Basically we are iterating to change the direction to which the Nodes are pointing
    // Eg: 3 -> 2 -> 1  =====>  3 <- 2 <- 1
    ListNode* curr = slow->next;
    ListNode* prev = NULL;
    ListNode* temp;

    while(curr != NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    

    // All that remains is to iterate through the reversed Linked list and check with the original linked list
    // Loop terminates when you iterate through the reversed linked list
    slow = prev;
    while (slow != NULL){
        if(slow->data != head->data) return false;
        slow = slow->next;
        head = head->next;
    }

    return true;
}

int main(){
    ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(1);

    cout << isPalindrome(head);

    return 0;
}