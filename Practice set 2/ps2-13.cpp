#include<iostream>
using namespace std;
int main (){
    int n,sum=0,r,arm;
    cout<<"enter a number to check whether the number is armstrong or not: "<<endl;
    cin>>n;
    arm=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(arm==sum)
    {
        cout<<"armstrong number :"<<sum<<endl;
    }
    else{
        cout<<"Not an armstrong number";
    }


    return 0;
}