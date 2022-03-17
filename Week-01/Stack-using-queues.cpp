// Problem Name: Implement Stack using Queues
// Difficulty: Easy
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Implement Stack using Queues.
// Memory Usage: 6.8 MB, less than 87.64% of C++ online submissions for Implement Stack using Queues.
// g++ -std=c++11 -o your-output_exe-name source_file.cpp

#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
    deque<int> dqstack;

    MyStack() {
    }
    
    void push(int x) {
        dqstack.push_back(x);
    }
    
    int pop() {
        int x = dqstack.back();
        dqstack.pop_back();
        return x;
    }
    
    int top() {
        if(!dqstack.empty()) return dqstack.back();
        return -1;
    }
    
    bool empty() {
        bool t = (dqstack.size() == 0) ? true: false;
        return t;
    }
};

int main(){
    MyStack obj;
    obj.push(5);
    obj.push(2);
    int top = obj.top();
    int ele = obj.pop();
    bool check = obj.empty();
    cout << top << "\t" << ele << "\t" << check;
}