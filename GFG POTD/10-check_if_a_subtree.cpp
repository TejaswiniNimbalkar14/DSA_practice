//Check if a tree is a subtree of other tree

#include<iostream>
using namespace std;

class Solution
{
  public:
    //Function to check if S is a subtree of tree T.
    bool isSame(Node* T, Node* S){
        if(S == NULL && T == NULL)
            return true;
        if(S == NULL || T == NULL)
            return false;
            
        return (S->data == T->data && isSame(T->left, S->left) && isSame(T->right, S->right));
    }
    bool isSubTree(Node* T, Node* S) 
    {
        // Your code here
        if(S == NULL)
            return true;
        if(T == NULL)
            return false;
            
        if(isSame(T, S))
            return true;
            
        return (isSubTree(T->left, S) || isSubTree(T->right, S));
    }
};