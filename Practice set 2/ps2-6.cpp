#include<iostream>
using namespace std;
int main (){
    int n,r,rev=0;
    cout<<"enter a number to reverse it: "<<endl;
    cin>>n;
    do{
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    while(n!=0);
    cout<<"reversed number: "<<rev;
    return 0;
}