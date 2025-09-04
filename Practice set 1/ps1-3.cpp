#include<iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"enter two number: ";
    cin>>a>>b;
    if(a>b)
    {
        cout<<"the number a("<<a<<") is the largest one"<<endl;
    }
    else if(b>a){
        cout<<"the number b("<<b<<") is the largest one"<<endl;    
    }
    return 0;
}