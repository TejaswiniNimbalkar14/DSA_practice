//Sort an array containing 0's and 1's only
//GFG : https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1

#include<iostream>
using namespace std;

class Solution{
    public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        int i = 0;
        int j = N - 1;
        while(i < j){
            if(A[i] == 1 && A[j] == 0){
                swap(A[i], A[j]);
                i++;
                j--;
            } else if(A[i] == 0 && A[j] == 1)
                i++;
            else if(A[i] == 0 && A[j] == 0){
                i++;
            } else  j--;
        }
    }
};