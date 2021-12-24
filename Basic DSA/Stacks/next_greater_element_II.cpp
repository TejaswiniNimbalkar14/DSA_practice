//Next greater element II
//Leetcode: 503

//Approach 1: just like next_greater_element.cpp

//Approach 2: Using stack
//TC: O(2n + 2n) AS: O(n)
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> s;
        int n = nums.size();
        vector<int> v(n);
        for(int i = 2 * n - 1; i >= 0; i--){
            while(!s.empty() && s.top() <= nums[i % n])
                s.pop();
            if(i < n){
                if(s.empty())
                    v[i % n] = -1;
                else    v[i % n] = s.top();
            }
            s.push(nums[i % n]);
        }
        return v; 
    }
};

int main() {
    //handle input-output here
}