//Maximum and minimum of an array using minimum number of comparisons

#include<iostream>
using namespace std;

//Bruteforce - Linear Search - O(n) - Comparisons: 2(n - 1)

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++)  cin>>arr[i];
//     int max, min;
//     if(n == 1){
//         max = min = arr[0];
//     } else {
//         max = min = arr[0];
//         for(int i = 1; i < n; i++){
//             if(arr[i] > max)    max = arr[i];
//             if(arr[i] < min)    min = arr[i];
//         }
//     }
//     cout<<"max :"<<max<<" min: "<<min;

//     return 0;    
// }


//Better - Linear Search - O(n)
//Camparisons - Worst case: 1 + 2(n - 2)
//              Best case: 1 + (n - 2)

// pair<int, int> getMinMax(int n, int arr[]){
//     pair<int, int> min_max;
//     if(n == 1){
//         min_max.first = min_max.second = arr[0];
//         return min_max;
//     }
//     if(arr[0] > arr[1]){
//         min_max.first = arr[1];
//         min_max.second = arr[0];
//     } else{
//         min_max.first = arr[0];
//         min_max.second = arr[1];
//     }
//     for(int i = 2; i < n; i++){
//         if(arr[i] < min_max.first)  min_max.first = arr[i];
//         if(arr[i] > min_max.second) min_max.second = arr[i];
//     }
//     return min_max;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++)  cin>>arr[i];

//     pair<int, int> min_max = getMinMax(n, arr);
//     cout<<"min: "<<min_max.first<<" max: "<<min_max.second;

//     return 0;
// }

//Optimal - tournament method - divide and conquer
//comparisons in fraction of n

pair<int, int> getMinMax(int arr[], int low, int high){
    pair<int, int> min_max, mml, mmr;
    if(low == high){
        min_max.first = min_max.second = arr[0];
        return min_max;
    } else if(high - low == 1){
        if(arr[low] < arr[high]){
            min_max.first = arr[low];
            min_max.second = arr[high];
        } else{
            min_max.first = arr[high];
            min_max.second = arr[low];
        }
        return min_max;
    } else { 
        int mid = low + (high - low) / 2;
        mml = getMinMax(arr, low, mid);
        mmr = getMinMax(arr, mid+1, high);
        if(mml.first < mmr.first){
            min_max.first = mml.first;
        } else  min_max.first = mmr.first;
        if(mml.second > mmr.second) min_max.second = mml.second;
        else min_max.second = mmr.second;
    }
    return min_max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)  cin>>arr[i];

    pair<int, int> min_max = getMinMax(arr, 0, n - 1);
    cout<<"min : "<<min_max.first<<" max: "<<min_max.second;

    return 0;
}