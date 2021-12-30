

#include<iostream>
using namespace std;

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