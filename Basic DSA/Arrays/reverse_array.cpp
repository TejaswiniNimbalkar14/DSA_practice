//Reverse the array

#include<iostream>
using namespace std;

//Method 1 - Iterative way - O(n)

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++)  cin>>arr[i];

//     int start = 0, end = n - 1;
//     while(start < end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }

//     for(int i = 0; i < n; i++)  cout<<arr[i]<<" ";

//     return 0;
// }

//Method 2 - Recursive way - O(n)

void reverse_array(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverse_array(arr, start+1, end-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)  cin>>arr[i];

    reverse_array(arr, 0, n-1);
    for(int i = 0; i < n; i++)  cout<<arr[i]<<" ";

    return 0;
}