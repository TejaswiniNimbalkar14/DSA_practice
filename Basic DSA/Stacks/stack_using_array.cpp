//Implementing Stack Using Array
//TC: O(1), AS: O(1)

#include<iostream>
using namespace std;

#define n 100

class Stack {
    int* arr;
    int top_ptr;

    public:
    Stack() {
        arr = new int[n];
        top_ptr = -1;
    }

    void push(int x) {
        if(top_ptr == n - 1){
            cout<<"Stack Overflow...."<<endl;
            return;
        }

        top_ptr++;
        arr[top_ptr] = x;
    }

    void pop() {
        if(top_ptr == -1){
            cout<<"Stack Underflow...."<<endl;
            return;
        }

        top_ptr--;
    }

    int top() {
        if(top_ptr == -1) {
            cout<<"No element in stack..."<<endl;
            return -1;
        }

        return arr[top_ptr];
    }

    bool empty() {
        if(top_ptr == -1)   return true;
        else return false;
    }
};

int main() {
    Stack S1;
    S1.push(1);
    S1.push(2);
    S1.push(3);
    S1.push(4);
    cout<<"Top is: "<<S1.top()<<endl;
    S1.pop();
    cout<<"Top is: "<<S1.top()<<endl;
    S1.pop();
    S1.pop();
    cout<<"Empty: "<<S1.empty()<<endl;
    S1.pop();
    S1.pop();

    return 0;
}