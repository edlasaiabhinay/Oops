#include<iostream>
using namespace std;
int main (){
    int n,i=1;
    cout<<"enter a number: ";
    cin>>n;
    // for(int i=1;i<=10;i++)
    // {
    //     cout<<n<<"x"<<i<<"="<<n*i<<endl;
    // }
    do
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
        i++;
    }while(i<=10);
    return 0;
}