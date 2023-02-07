#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];

        priority_queue<int,vector<int>,greater<int>> minpq;
        for(int i=0; i<nums.size(); i++){
            if(minpq.size()<k){
                minpq.push(nums[i]);
            }else{
                if(minpq.top()<nums[i]){
                    minpq.pop();
                    minpq.push(nums[i]);
                }
            }
        }
        return minpq.top();
        
    }
};