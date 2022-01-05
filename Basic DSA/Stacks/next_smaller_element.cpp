//Find next smaller element
//GFG Problem: 

#include<iostream>
#include<stack>
using namespace std;

int * nextSmaller(int arr[], int n){
    stack<int> s;
    int *temp;
    for(int i = 0; i < n; i++){
        int next = -1;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[i]){
                next = arr[j];
                break;
            }
        }
        temp[i] = next;
    }
    return temp;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int * arr1;
    arr1 = nextSmaller(arr, n);
    for(int i = 0; i < n; i++)
        cout<<arr1[i]<<" ";

    return 0;
}