//Palindrome pair
//GFG: https://practice.geeksforgeeks.org/problem-of-the-day/dashboard

#include<iostream>
using namespace std;

//BruteForce Approach : TC - O(n * n * l), where l = temp.length()
//AS: O(1)
bool isPalindrome(string s){
    int i = 0, j = s.length() - 1;
    while(i <= j){
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

bool palindromePair(string arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            string temp = arr[i] + arr[j];
            if(isPalindrome(temp)){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    string arr[n];
    for(int i = 0; i < n; i++)  cin>>arr[i];

    cout<<palindromePair(arr, n);

    return 0;
}

//Better Approach: TC: O(n * l * l) 
//n - array size, l - length of longest string, one extra l for palindrome

class Solution{
  public:
  bool isPalindrome(string s){
      int i = 0, j = s.length() - 1;
      while(i < j){
          if(s[i++] != s[j--])
            return false;
      }
      return true;
  }
  
  bool palindromepair(int n, string arr[]){
    
      unordered_map<string, int> mp;
      for(int i = 0; i < n ; i++){
          string s = arr[i];
          reverse(s.begin(), s.end());
          mp[s] = i;
      }
      
      for(int i = 0; i < n; i++){
          for(int j = 0; j < arr[i].length(); j++){
              string prefix = arr[i].substr(0, j);
              string suffix = arr[i].substr(j);
              
              if(isPalindrome(prefix) && mp.count(suffix) && mp[suffix] != i)
                return true;
              
              if(isPalindrome(suffix) && mp.count(prefix) && mp[prefix] != i)
                return true;
          }
      }
      return false;
  }
};