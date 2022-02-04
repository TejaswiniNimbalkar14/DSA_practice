//Longest Sub-Array with Sum K 
//GFG:  https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1#

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    //Bruteforce: TC: O(n ^ 2) AS: O(1)
    // int lenOfLongSubarr(int A[],  int N, int K) 
    // { 
    //     // Complete the function
    //     int max_len = 0;
    //     for(int i = 0; i < N; i++){
    //         int sum = 0;
    //         for(int j = i; j < N; j++){
    //             sum += A[j];
    //             if(sum == K){
    //                 max_len = max(max_len, j - i + 1);
    //                 //break;
    //             }
    //         }
    //     }
    //     return max_len;
    // } 

    //Prefix sum Approach
    //TC: O(n) AS: O(n)
    int lenOfLongSubarr(int A[],  int N, int K) {
        int max_len = 0;
        int sum = 0;
        unordered_map<int, int> mp;
        mp[sum] = 0;
        for(int i = 0; i < N; i++){
            sum += A[i];
            
            if(mp.find(sum - K) != mp.end())
                max_len = max(max_len, i - mp[sum - K] + 1);
                
            if(mp.find(sum) == mp.end())
                mp[sum] = i + 1;
        }
        return max_len;
    }

    
};

//Sliding window technique only work for array conatining only positive integers
int lenOfLongSubarr(vector<int> A,  int N, int K) {
        int i = 0, j = 0;
        int max_len = 0, sum = 0;
        while(j < N){
            sum += A[j];

            if(sum == K){
                max_len = max(max_len, j - i + 1);
            } else if(sum > K) {
                while(sum > K){
                    sum -= A[i];
                    i++;
                }
            }
            j++;
        }
        return max_len;
    }

int main()
{
	vector<int> A;
	int k, n;
    cin>>n>>k;
    for(int i = 0; i < n; i++)  cin>>A[i];
	cout << lenOfLongSubarr(A, n, k);
	return 0;
}