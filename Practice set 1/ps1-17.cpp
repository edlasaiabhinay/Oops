#include<iostream>
using namespace std;
int main(){
    int n,f1,f2,f3;
    cout<<"enter a number : "<<endl;
    cin>>n;
    f1=0;
    f2=1;
    cout<<"the fibanocci serires upto "<<n<<" terms is :"<<endl;
    cout<<f1<<endl<<f2<<endl;
    f3=f1+f2;
    while(f3<=n){
        cout<<f3<<endl;
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }

    return 0;
}