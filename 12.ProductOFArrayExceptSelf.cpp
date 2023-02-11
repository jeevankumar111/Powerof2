#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> sol(s);
        
        //Multiply from left to right
        sol[0] = 1; //sol[i] == leftProduct
        for (int i=0; i<s-1; i++){
            sol[i+1] = sol[i] * nums[i];
        }
        
        //Multiply from right (index size-1) to left
        int rightProduct=1;
        for(int i=s-1; i>=0; i--){
            sol[i] = rightProduct * sol[i];
            rightProduct = rightProduct * nums[i];
        }
            
        return sol;
    }
};
