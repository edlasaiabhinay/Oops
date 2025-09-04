#include<iostream>
using namespace std;
int main (){
    int n,sum=0;
    cout<<"enter a number to find the sum of first n natural numbers:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"the sum= "<<sum<<endl;

    return 0;
}