//Find square root of a number

#include<iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        //O(n) - BruteForce
        // int sq = 0;
        // for(long long int i = 0; i <= x; i++){
        //     if(i * i == x){
        //         sq = i;
        //         break;
        //     }
        //     if(i * i > x){
        //         sq = i - 1;
        //         break;
        //     }
        // }
        // return sq;
        
        //O(n) - BruteForce
        // if(x == 0 || x == 1)
        //     return x;
        // long long int i = 1;
        // while(i * i <= x){
        //     i++;
        // }
        // return i - 1;
        
        //O(logn) - Optimal - Using Binary Search
        if(x == 0 || x == 1)
            return x;
        long long int mid, sq;
        int start = 0, end = x;
        while(start <= end){
            mid = start + (end - start) / 2;
            if(mid * mid == x)
                return mid;
            else if(mid * mid < x){
                start = mid + 1;
                sq = mid;
            }
            else    end = mid - 1;
        }
        return sq;
    }
};

int main() {
    //handle input-output here
}