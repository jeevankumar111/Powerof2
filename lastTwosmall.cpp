#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[] = {1,46,33,222,89};
        int n= sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+n);
        cout<<"First small Element :: "<<arr[0]<<endl;
        cout<<"Secong Smallest Element :: "<<arr[1]<<endl;
    
}