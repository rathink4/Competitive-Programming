// Problem Name: Remove Duplicates in Sorted List
// Difficulty: Easy
// Runtime: 23 ms, faster than 15.83% of C++ online submissions for Remove Duplicates from Sorted List.
// Memory Usage: 12.4 MB, less than 7.91% of C++ online submissions for Remove Duplicates from Sorted List.
// g++ -std=c++17 -o your-output_exe-name source_file.cpp

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

ListNode* deleteDuplicates(ListNode* head) {
    map<int,bool> dict;
    ListNode* prev;
    ListNode* start = head;
    while(head != NULL){
        if(dict.count(head->data) && dict[head->data]){
            prev->next = head->next;
            head = head->next;
            continue;
        }
        prev = head;
        dict[head->data] = true;
        head = head->next;
    }
    return start;

}


int main(){
    ListNode* head = newNode(1);
    head->next = newNode(1);
    head->next->next = newNode(2);
    head->next->next->next = newNode(2);

    ListNode* printer = deleteDuplicates(head);
    while(printer != NULL){
        cout << printer->data << "\t";
        printer = printer->next;
    }

    return 0;
}