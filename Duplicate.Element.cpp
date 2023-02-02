#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class DE{
    private:
    bool DuplicateElement(vector<int>& nums){
        unordered_map<int,int> count;
        for(auto i:nums){

                if(++count[i]>1) return true;
                else return false;


        }



    }
};