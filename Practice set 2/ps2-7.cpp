#include<iostream>
using namespace std;
int main (){
    int n,count=0;
    cout<<"enter a number: "<<endl;
    cin>>n;
    if(n<=1)
    {
        cout<<"not a prime number";
    }
    else{
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            cout<<"the number "<<n<<" is prime";
        }
        else{
            cout<<"not prime";
        }
    }
    return 0;
}