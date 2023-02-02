#include <iostream>
#include <bits/stdc++.h>

using namespace std;



  int  jk(int a[],int n, int m){
        if(n<m){
            return -1;
        }
        sort(a,a+n);
        int i=0, j=m-1;

        long long ans = INT_MAX;

        while(j<n){
            ans=(ans,a[j]-a[i]);
            j++;
            i++;
        }
        return ans;
    }



int main(){

    int a[] = { 3, 4, 1, 9, 56, 7, 9, 12 };
	int m = 5; // Number of students
	int n = sizeof(a) / sizeof(a[0]);

    
	cout << "The Minimum difference is "
		<<jk(a, n, m);
	return 0;
}
