#include<bits/stdc++.h>
using namespace std;

class MyQueue {

    stack<int> in , out;

public:
    // MyQueue() {
    //     stack<string> s1;
    //     stack<string> s2;
    // }
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        peek();
        out.pop();
    }
    
    int peek() {
        if(out.empty())
            while(in.size()) {
                out.push(in.top());
                in.pop();
            }
                
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
};

// driver code

int main() {
    MyQueue Q;

    Q.push(1);
    Q.push(2);
    cout << Q.peek() << " ";
    Q.pop();
    if(Q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;
}