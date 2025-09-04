#include<iostream>
using namespace std;
int main (){
    int n,fact=1;
    cout<<"enter a number to find its factorial : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        cout<<fact<<endl;
    }
    // cout<<"total=" <<fact<<endl;
    return 0;
}