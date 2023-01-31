#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maxsum=INT_MIN; 
        for(int i=0; i<nums.size(); i++){
            sum=sum+nums[i];
            maxsum=max(maxsum,sum);
            sum=max(sum,0);
        }
        return maxsum;
        
    }
};

int main(){

    
}