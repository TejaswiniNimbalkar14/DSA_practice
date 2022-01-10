//Add 1 to a number represented as linked list 
//GFG: https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1#

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    Node* reverse(Node *head){
        Node *prev = NULL, *next = NULL, *curr = head;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* new_head = reverse(head);
        Node *curr = new_head, *prev = NULL;
        int carry = 0;
        while(curr != NULL){
            int sum = 0;
            if(prev == NULL)    sum = curr->data + 1;
            else    sum = curr->data + carry;
            
            carry = sum / 10;
            curr->data = sum % 10;
            prev = curr;
            curr = curr->next;
        }
        if(carry == 1){
            Node *new_node = new Node(1);
            prev->next = new_node;
        }
        return reverse(new_head);
    }
};