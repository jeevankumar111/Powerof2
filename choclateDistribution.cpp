#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class solution{
    public:

    long long FindMInDif(vector<int,int> &a,long long n, long long m){
        if(n<m){
            return -1;
        }
        sort(a.begin(),a.end());
        int i=0, j=m-1;

        long long ans = INT_MAX;

        while(j<n){
            ans=(ans,a[j]-a[i]);
            j++;
            i++;
        }
        return ans;
    }

};

