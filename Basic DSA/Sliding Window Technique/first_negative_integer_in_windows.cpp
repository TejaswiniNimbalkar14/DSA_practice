//First negative integer in every window of size k 
//GfG: https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1#

#include<bits/stdc++.h>
using namespace std;

//BruteForce: TC: O(N ^ 2)
//TLE for larger test cases
// vector<long long> printFirstNegativeInteger(long long int A[],
//                                              long long int N, long long int K) {
//     vector<long long> res;
//     for(long long int i = 0; i <= N - K; i++){
//         long long int j = i;
//         while(j < i + K){
//             if(A[j] < 0){
//                 res.push_back(A[j]);
//                 break;
//             }
//             j++;
//         }
//         if(j == i + K)  res.push_back(0);
//     }
//     return res;
//  }

//Sliding Window TC: O(n) AS: O(K)
vector<long long> printFirstNegativeInteger(long long int A[],
                                              long long int N, long long int K){
    vector<long long> res;
    queue<long long int> q;
    long long int i = 0, j = 0;
    while(j < N){
        if(A[j] < 0)    q.push(A[j]);
        if(j - i + 1 < K)   j++;
        else if(j - i + 1 == K){
            if(q.empty())   res.push_back(0);
            else    res.push_back(q.front());
            
            if(q.front() == A[i])   q.pop();
            i++;
            j++;
        }
    }
    return res;
}