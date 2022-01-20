//Binary to Decimal number
//GFG: https://practice.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
		int binary_to_decimal(string str)
		{
		    // Code here.
		    reverse(str.begin(), str.end());
		    int res = 0;
		    for(int i = 0; i < str.length(); i++){
		        res += (str[i] - '0') * pow(2, i);
		    }
		    return res;
		}
};