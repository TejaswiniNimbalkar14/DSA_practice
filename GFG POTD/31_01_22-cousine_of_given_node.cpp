//Cousines of given node
//GFG: https://practice.geeksforgeeks.org/problems/cousins-of-a-given-node/1
//TC: O(n)

#include<bits/stdc++.h>
using namespace std;

/*
// A Binary Tree Node
struct Node
{
	int data;
	Node* left;
	Node* right;
};*/

class Solution
{
    public:
    vector<int> printCousins(Node* root, Node* node_to_find)
    {
        //code here
        queue<Node*> q;
        bool flag = true;
        //Level order traversal
        //push root node
        q.push(root);
        while(!q.empty() && flag){
            int n = q.size();
            for(int i = 0; i < n; i++){
                Node* node = q.front();
                q.pop();
            
                //push children iff node_to_find is not one of them
                if(node->left == node_to_find || node->right == node_to_find){
                    flag = false;
                } else {
                    if(node->left)  q.push(node->left);
                    if(node->right) q.push(node->right);
                }
            }
        }
        
        if(q.empty())   return {-1};
        vector<int> res;
        while(!q.empty()){
            res.push_back(q.front()->data);
            q.pop();
        }
        return res;
    }
    
};
