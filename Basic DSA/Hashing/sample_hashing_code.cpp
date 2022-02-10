//Hash function for an array containing positive and negative numbers of a high range
//Here for searching an element from such array time complexity is high
//by using hash function we will reduce the time complexity to O(1)

#include<iostream>
#include<math.h>
using namespace std;
#define MAX 1000

//hash function logic - start
bool hash_table[MAX + 1][2];

bool search(int x){
    if(x >= 0){
        if(hash_table[x][0] == 1)
            return true;
        else    return false;
    } else {
        if(hash_table[abs(x)][1] == 1)
            return true;
        else    return false;
    }
}

void insert(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            hash_table[arr[i]][0] = 1;
        } else {
            hash_table[abs(arr[i])][1] = 1;
        }
    }
}
//hash function logic - end

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++)  cin>>arr[i];

    insert(arr, n);

    cout<<search(1)<<endl;
    cout<<search(-3)<<endl;
    cout<<search(7)<<endl;

    return 0;
}