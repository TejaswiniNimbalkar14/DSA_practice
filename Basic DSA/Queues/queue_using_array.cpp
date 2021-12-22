//Implement queue using array
//TC: O(1) AS: O(1)

#include<iostream>
using namespace std;

#define n 15

class Queue{
    int* arr;
    int front, back;

    public:
    Queue(){
        arr = new int[n];
        front = back = -1;
    }

    void enqueue(int x){
        if(back == n - 1){
            cout<<"Queue Overflow...."<<endl;
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1) front++;
    }

    void dequeue() {
        if(front == -1 || front > back){
            cout<<"Queue Underflow...."<<endl;
            return;
        }
        front++;
    }

    int peek() {
        if(front == -1 || front > back){
            cout<<"Queue Underflow...."<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty() {
        if(front == -1 || front > back){
            return true;
        }
        return false;
    }
};

int main() {

    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.empty()<<endl;

    q.dequeue();

    return 0;
}