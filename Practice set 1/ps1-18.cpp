#include<iostream>
using namespace std;
int main (){
    int n,r,rev=0,pal;
    cout<<"enter a number to check whether the umber is palindrome or not: "<<endl;
    cin>>n;
    pal=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(pal==rev)
    {
        cout<<"the number "<<rev<<" is palindrome";
    }
    else{
        cout<<"the number "<<rev<<" is not palindrome";
    }

    return 0;
}