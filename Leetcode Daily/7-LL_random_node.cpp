//Linked List random node
//Leetcode: 382

#include<iostream>
#include<vector>
using namespace std;


//Brute approach - Using extra space O(N)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    Solution(ListNode* head) {
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
    }
    
    int getRandom() {
        //rand() will generate a random number b/w 0 & RAND_MAX
        //then take modulo of LinkedList size with Array size. So, the range become 0 to n - 1
        int i = rand() % v.size();
        return v[i];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */

//Optimal Approach: REservior sampling