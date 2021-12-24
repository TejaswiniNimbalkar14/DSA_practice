//Next greater element
//GFG Problem: https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1#

#include<iostream>
#include<stack>
using namespace std;

//Approach 1: Bruteforce approach using extra array
//TC: O(n^2) AS: O(n)
int * nextGEle(int arr[], int n) {
    int * arr1;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                arr1[i] = arr[j];
                break;
            }
            if(j == n - 1)
                arr1[i] = -1;
        }
    }
    arr1[n-1] = -1;
    return arr1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int * arr1;
    arr1 = nextGEle(arr, n);

    for(int i = 0; i < n; i++)
        cout<<arr1[i]<<" ";

    return 0;
}

//Approach 2: Using stack
//TC: O(2n) AS: O(n)
// class Solution{
//     public:
//     //Function to find the next greater element for each element of the array.
//     vector<long long> nextLargerElement(vector<long long> arr, int n){
//         // Your code here
//         vector<long long> ngr(n);
//         stack<long long> st;
//         // for(int i = n - 1; i >= 0; i--){
//         //     while(!st.empty() && st.top() <= arr[i]){
//         //         st.pop();
//         //     }
//         //     if(!st.empty())
//         //         ngr[i] = st.top();
//         //     else    ngr[i] = -1;
            
//         //     st.push(arr[i]);
//         // }
//         for(int i = n - 1; i >= 0; i--){
//             while(!st.empty()){
//                 if(st.top() <= arr[i])
//                     st.pop();
//                 else{
//                     ngr[i] = st.top();
//                     break;
//                 }
//             }
//             if(st.empty())
//                 ngr[i] = -1;
//             st.push(arr[i]);
//         }
//         return ngr;
//     }
// };