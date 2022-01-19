//Maximum sum of non adjacent node
//GFG: https://practice.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1

#include<iostream>
using namespace std;

//Node Structure
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    int pairMax(pair<int, int> a) {
    return max(a.first, a.second);
}

// a pair represents two values <yes, no>.
pair<int, int> fun(Node *root) {
    if(!root) return {0, 0};
    auto a = fun(root->left);
    auto b = fun(root->right);
    
    auto yes = root->data + a.second + b.second;
    auto no = pairMax(a) + pairMax(b);
    
    return {yes, no};
};

    int getMaxSum(Node *root) 
    {
        // Add your code here
        return pairMax(fun(root));
    }
};