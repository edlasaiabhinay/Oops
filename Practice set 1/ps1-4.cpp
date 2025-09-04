#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter three numbers: ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"the number "<<a<<" is the largest one"<<endl;
    }
    else if(b>a && b>c){
        cout<<"the number "<<b<<" is the largest one"<<endl;    
    }
    else{
        cout<<"the number "<<c<<" is the largest one"<<endl;
    }
    return 0;
}