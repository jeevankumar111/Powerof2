
#include <bits/stdc++.h>
using namespace std;
int main(){



    int arr[] = { 22,44,32,11,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    //finding the min element using the pointers

    cout<<"Mininmum Element is "<<*min_element(arr,arr+n)<<endl;
    cout<<"Maximum Element is "<<*max_element(arr,arr+n)<<endl;

    //Storing the address of the pointers
    //Finding the value using the address variables

    int &min=*min_element(arr,arr+n);
    int &max=*max_element(arr,arr+n);

    cout<<"max NUmbers is :: "<<max<<"\n";
    cout<<"min Numbers is :: "<<min<<"\n";

    return 0;


}