#include<iostream>
using namespace std;
int main (){
    int n,i,count=0;
    cout<<"enter a number: "<<endl;
    cin>>n;
    if(n<=1)
    {
        cout<<"the number is not prime"<<endl;
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
            cout<<"the number "<<n<<" is prime"<<endl;
        }
        else{
            cout<<"not prime";
        }
    }
    return 0;
}