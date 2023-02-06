#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void repeatedNumber(const vector<int> &v)
 {
    long long int n=v.size();
    long long int arrsum=0,sum=n*(n+1)/2,sqsum=n*(n+1)*(2*n+1)/6,squarsum=0;
    
    for(int i=0; i<n; i++){
        arrsum += (long long int )v[i];
        squarsum +=(long long int)v[i]*(long long int)v[i];
    }
    long long int minus = (sum -arrsum);
    long long int plus = (sqsum-squarsum)/minus;
    vector<int>ans;
    
    ans.push_back((plus-minus)/2);
    ans.push_back((plus+minus)/2);
    //return ans;
}
int main(){
    
}
