//Basics of Linked List
//Creation, Traversing, Inserting

#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

bool search(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteFromHead(node* &head){
    node* toDelete = head;
    head = head->next;

    delete toDelete;
}

void deleteFromLL(node* &head, int val){
    if(head == NULL)
        return;

    if(head->next == NULL){
        deleteFromHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

int main() {
    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    cout<<endl;
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    display(head);
    cout<<endl;
    string s = search(head, 8) ? "true" : "false";
    cout<<s<<endl;
    deleteFromLL(head, 5);
    display(head);

    return 0;
}