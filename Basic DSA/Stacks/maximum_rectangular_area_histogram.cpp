

#include<iostream>
using namespace std;

//Approach 2: Better TC: = O(4n) =~ O(n) AS: O(3n)
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& h) {
//         int n = h.size();
//         stack<int> s;
//         int leftSmall[n], rightSmall[n];
        
//         for(int i = 0; i < n; i++){
//             while(!s.empty() && h[s.top()] >= h[i])
//                 s.pop();
            
//             if(s.empty())   leftSmall[i] = 0;
//             else    leftSmall[i] = s.top() + 1;
//             s.push(i);
//         }
        
//         while(!s.empty())   s.pop();
        
//         for(int i = n - 1; i >= 0; i--){
//             while(!s.empty() && h[s.top()] >= h[i])
//                 s.pop();
            
//             if(s.empty())   rightSmall[i] = n - 1;
//             else    rightSmall[i] = s.top() - 1;
//             s.push(i);
//         }
        
//         int max_area = INT_MIN;
//         for(int i = 0; i < n; i++){
//             int area = (rightSmall[i] - leftSmall[i] + 1) * h[i];
//             max_area = max(max_area, area);
//         }
//         return max_area;
//     }
// };

//Approach1: BruteForce TC:O(n^2) AS:O(1)
long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        long long max_area = INT_MIN;
        // for(int i = 0; i < n; i++){
        //     int left_min, right_min;
        //     left_min = right_min = INT_MAX;
        //     int j, k;
        //     j = i - 1;
        //     k = i + 1;
        //     while(j >= 0){
        //         if(arr[j] < arr[i])
        //             left_min = j;
        //         i--;
        //     }
        //     while(k < n){
        //         if(arr[k] < arr[i])
        //             right_min = k;
        //         k++;
        //     }
        //     long long temp = (right_min - left_min - 1) * i;
        //     max_area = max(max_area, temp);
        // }
        for(int i = 0; i < n; i++){
            long long min_height = INT_MAX;
            for(int j = i; j < n; j++){
                min_height = min(min_height, arr[j]);
                long long temp = (j - i + 1) * min_height;
                max_area = max(max_area, temp);
            }
            
        }
        return max_area;
    }

int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    long long max_area = getMaxArea(arr, n);

    cout<<max_area;

    return 0;
}