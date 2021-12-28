//Implement n stacks using one array
//Coding Ninjas Problem link: https://www.codingninjas.com/codestudio/problems/n-stacks-in-an-array_1164271?leftPanelTab=0

//Approach 1: Divide the stack in N parts each of size S/N
//AS: O(1) TC: O(1)
//N - no os stacks, S - size of array

#include<iostream>
using namespace std;


//Approach 2: Using extra space
//AS: O(2S + N) TC: O(S) for extra DS and O(1) for operations
class NStack
{
    int * data; 
    int * next;
    int * top;
    int free;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        // Write your code here.
        data = new int[S];
        next = new int[S];
        top = new int[N];
        free = 0;
        for(int i = 0; i < N; i++)
            top[i] = -1;
        
        for(int i = 0; i < S - 1; i++)
            next[i] = i + 1;
        next[S - 1] = -1;
    }
	
    bool isFull(){
        return (free == -1);
    }
    bool isEmpty(int m){
        return (top[m - 1] == -1);
    }
    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        if(isFull())
            return false;
        //update free
        int i = free;
        free = next[free];
        //update top
        next[i] = top[m - 1];
        top[m - 1] = i;
        //push data
        data[i] = x;
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        if(isEmpty(m))
            return -1;
        //update top
        int i = top[m - 1]; //Current top of m
        top[m - 1] = next[i]; //previous top of m
        //update free
        next[i] = free;
        free = i;
        
        return data[i];
    }
};

int main() {
    //handle input-output here
}