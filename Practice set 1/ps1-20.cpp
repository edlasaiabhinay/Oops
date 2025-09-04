#include<iostream>
using namespace std;
int main(){
    int a,b,gcd=1;
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;
    int min=(a<b)?a:b;
    for(int i=1;i<min;i++)
    {
        if(a%i==0 and b%i==0)
        {
            gcd=i;
        }
    }
    cout<<"the GCD is: "<<gcd<<endl;
    return 0;
}