//Robot bound in circle
//Leetcode: 1041

#include<iostream>
using namespace std;


class Solution {
public:
    void move(string s, int pos[2], int dir[2]){
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'G'){
                pos[0] += dir[0];
                pos[1] += dir[1];
            } else if(s[i] == 'L'){
                int temp = dir[0];
                dir[0] = -dir[1];
                dir[1] = temp;
            } else{
                int temp = dir[1];
                dir[1] = -dir[0];
                dir[0] = temp;
            }
        }
    }
    bool isRobotBounded(string s) {
        int pos[2] = {0, 0};
        int dir[2] = {0, 1};
        
        move(s, pos, dir);
        move(s, pos, dir);
        move(s, pos, dir);
        move(s, pos, dir);
        
        if(pos[0] == 0 && pos[1] == 0)
            return true;
        else    return false;
    }
};