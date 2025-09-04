#include<iostream>
using namespace std;
int main (){
    int num,pow,i=0,ans=1;
    cout<<"enter two numbers (num,pow) to calculate num^pow: "<<endl;
    cin>>num>>pow;
    while(i<pow){
        ans=ans*num;
        i++;
    }
    cout<<"the answer: "<<ans<<endl;
    return 0;
}