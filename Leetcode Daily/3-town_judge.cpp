//Find the town judge

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        //Approach 1 - Bruteforce AS: O(2n)
        vector<int> trusts(n + 1, 0), trusted(n + 1, 0);
        for(auto i : trust){
            trusts[i[0]]++;
            trusted[i[1]]++;
        }
        for(int i = 1; i <= n; i++){
            if(trusts[i] == 0 && trusted[i] == n - 1)
                return i;
        }
        return -1;

        //Approach 2 - Optimal AS: O(n)
        // vector<int> v(n + 1, 0);
        // for(auto i : trust){
        //     v[i[0]]--;
        //     v[i[1]]++;
        // }
        // for(int i = 1; i <= n; i++){
        //     if(v[i] == n - 1)
        //         return i;
        // }
        //return -1;
    }
};

int main(){
    //handle input-output here
}