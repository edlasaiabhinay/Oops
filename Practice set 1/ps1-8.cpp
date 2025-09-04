#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number(n): ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
        cout<<"total sum of "<<n<<" natural numbers is " <<sum<<endl;
    return 0;
}