//Leetcode Problem 1381
//Design a stack with increment operations

#include<iostream>
using namespace std;

//O(k) - copmplexity for increment 
// class CustomStack {
//     int s;
//     int* arr;
//     int top;
// public:
//     CustomStack(int maxSize) {
//         s = maxSize;
//         top = -1;
//         arr = new int[s];
//     }
    
//     void push(int x) {
//         if(top < s - 1){
//             top++;
//             arr[top] = x;
//         }
//     }
    
//     int pop() {
//         if(top <= -1)
//             return -1;
        
//         return arr[top--];
//     }
    
//     void increment(int k, int val) {
//         int ind = min(k - 1, top);
//         for(int i = 0; i <= ind; i++){
//             arr[i] += val;
//         }
//     }
// };

//TC: O(1) - for all
class CustomStack {
    int* arr;
    int* incr;
    int s, top;
public:
    CustomStack(int maxSize) {
        s = maxSize;
        top = -1;
        arr = new int[s];
        incr = new int[s];
    }
    
    void push(int x) {
        if(top < s - 1){
            top++;
            arr[top] = x;
            incr[top] = 0;
        }
    }
    
    int pop() {
        if(top <= -1)
            return -1;
        
        int x = arr[top];
        int inc = incr[top];
        top--;
        if(top >= 0) {
            incr[top] += inc;
        }
        return x + inc;
    }
    
    void increment(int k, int val) {
        int ind = min(k - 1, top);
        if(ind >= 0){
            incr[ind] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */

int main() {
    //handle input-output here
}