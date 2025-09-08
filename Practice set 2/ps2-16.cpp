#include<iostream>
using namespace std;
int main (){
    int n,i,r,rev=0,pal;
    cout<<"enter a number to check if it is a palindrome or not: "<<endl;
    cin>>n;
    pal=n;
    for(;n!=0;n=n/10){
        r=n%10;
        rev=rev*10+r;
    }
    if(rev==pal)
    {
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
    
    return 0;
}