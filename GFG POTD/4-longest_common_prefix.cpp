//Longest common prefix in a string array
//GFG: https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1#
//Leetcode: 14

#include<iostream>
#include<algorithm>
using namespace std;

class Solution{
    public:
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        // if(N == 0)  return "-1";
        // if(N == 1)  return arr[0];
        // sort(arr, arr + N);
        // int m = arr[0].length();
        // string cmp = arr[0];
        // int min = m;
        // string prefix = "-1";
        
        // for(int i = 1; i < N; i++){
        //     string prefixTemp;
        //     for(int j = 0; j < m; j++){
        //         if(cmp[j] == arr[i][j]){
        //             prefixTemp += cmp[j];
        //         } else 
        //             break;
        //     }
        //     if(prefixTemp.length() <= min){
        //         min = prefixTemp.length();
        //         prefix = prefixTemp;
        //     }
        // }
        // if(prefix.empty())  return "-1";
        // return prefix;
        
        if(N == 0)  return "-1";
        if(N == 1)  return arr[0];
        sort(arr, arr + N);
        string a = arr[0];
        string b = arr[N - 1];
        string prefix = "";
        for(int i = 0; i < a.length(); i++){
            if(a[i] == b[i])
                prefix += a[i];
            else    break;
        }
        if(prefix.empty())  return "-1";
        return prefix;
    }
}

int main(){
    //handle input-output here
}