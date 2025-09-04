#include<iostream>
using namespace std;
int main (){
    int P,R,T,SI;
    cout<<"enter pincipal,rate and time: "<<endl;
    cin>>P>>R>>T;
    SI=(P*R*T)/(100);
    cout<<"The simple interest is "<<SI<<endl;

    return 0;
}