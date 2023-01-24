#include <iostream>
using namespace std;
int main(){


    int n;
    cout<<" Enter any NUmner :: ";
    cin>>n;

    if(n>0){
        while(n%2==0){
            n=n/2;
        }
        if(n==1){
            cout<<n<<"Power of 2"<<endl;
        }
        else{
            cout<<n<<" Not power of two"<<endl;
        }
        }
        else {
            cout<<"Enter a Poositive Number"<<endl;
        }

    }
