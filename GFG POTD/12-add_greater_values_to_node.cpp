//Add all greater values to every node in a BST
//GFG: https://practice.geeksforgeeks.org/problems/add-all-greater-values-to-every-node-in-a-bst/1

#include<iostream>
using namespace std;

/*
Node structure is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// modify the BST and return its root
int fun(Node* root, int sum) {
    if(root == NULL) return 0;
    int sumRight = fun(root->right, sum);
    int sumLeft = fun(root->left, sum + sumRight + root->data);
    int res = sumLeft + sumRight + root->data;
    root->data = root->data + sumRight + sum;
    return res;
}
Node* modify(Node *root)
{
    // Your code here
    fun(root, 0);
    return root;
}