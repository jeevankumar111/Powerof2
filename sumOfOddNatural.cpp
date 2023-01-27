#include <iostream>
using namespace std;

class sumof{

    public:
    sumof();
    ~sumof();
    void jk();

};

sumof :: sumof(){

}

void sumof :: jk(){

    int n,s=0;
    cout<<"Enter the odd values :: ";
    cin>>n;
    for(int i =1;i<n; i++){
        cout<<2*i-1<<" ";
        s=s+(2*i-1);
        cout<<endl;

    }

    cout<<" sum Of Given odd Numbers are :: "<<s<<endl;
}
sumof::~sumof(){
    cout<<"Constructor Destroyes succesfully" <<endl;
}









int main(){
    sumof u;
    u.jk();


}