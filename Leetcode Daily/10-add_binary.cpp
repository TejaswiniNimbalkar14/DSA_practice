//Add binary strings
//GFG:
//Leetcode: 67

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        //not working for all test cases
        // if(a == "0" && b == "0")
        //     return "0";
        // int k = 0;
        // unsigned long long int a1, b1;
        // a1 = b1 = 0;
        // for(int i = a.length() - 1; i >= 0 ; i--){
        //     a1 += (a[i] - '0') * (int)pow(2, k);
        //     k++;
        // }
        // k = 0;
        // for(int i = b.length() - 1; i >= 0 ; i--){
        //     b1 += (b[i] - '0') * (int)pow(2, k) * 10LL;
        //     k++;
        // }
        // unsigned long long int c = a1 + b1;
        // string ans = "";
        // while(c != 0){
        //     int rem = c % 2;
        //     c /= 2;
        //     ans += char(rem + '0');
        // }
        // reverse(ans.begin(), ans.end());
        // return ans;
        
        int carry, sum, i, j;
        carry = sum = 0;
        i = a.length() - 1;
        j = b.length() - 1;
        string ans= "";
        while(i >= 0 || j >= 0 || carry == 1){
            sum = carry;
            if(i >= 0)  sum += a[i--] - '0';
            if(j >= 0)  sum += b[j--] - '0';
            carry = sum > 1 ? 1 : 0;
            ans += (sum % 2) + '0';
       }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//GFG:
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    // your code here
	    int i, j, carry, sum;
	    carry = sum = 0;
	    i = A.length() - 1;
	    j = B.length() - 1;
	    string ans = "";
	    while(i >= 0 || j >= 0 || carry == 1){
	        sum = carry;
	        if(i >= 0)  sum += A[i--] - '0';
	        if(j >= 0)  sum += B[j--] - '0';
	        carry = sum > 1 ? 1 : 0;
	        ans += (sum % 2) + '0';
	    }
	    reverse(ans.begin(), ans.end());
	    int id_0 = 0;
	    while(id_0 < ans.length() && ans[id_0] == '0')
	        id_0++;
	    return ans.substr(id_0);
	}
};