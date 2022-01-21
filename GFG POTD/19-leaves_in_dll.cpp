//leaves in dll

#include<bits/stdc++.h>
using namespace std;

Node * convertToDLL(Node *root){
    // add code here.
    if(!(root->left) and !(root->right))
        return root;
    
    Node *Head = nullptr;
    
    if(root->left)
    {
        Head = convertToDLL(root->left);
        
        if(Head == root->left)
        root->left = nullptr;
    }
        
    if(root->right)
    {
        Node *temp = convertToDLL(root->right);
        
        if(temp == root->right)
        root->right = nullptr;
        
        if(!Head)
        Head = temp;
        
        else
        {
            Node *last = Head;
    
            while(last->right)
                last = last->right;
                
            last->right = temp;
            temp->left = last;
        }
    }
    
    return Head;
}