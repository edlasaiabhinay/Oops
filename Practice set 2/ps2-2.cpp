#include<iostream>
using namespace std;
int main (){
    cout<<"the first 10 even numbers"<<endl;
    for (int i=0;i<20;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}