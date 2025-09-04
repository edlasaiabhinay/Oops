#include<iostream>
using namespace std;
int main (){
    int n;
    do{
        cout<<"enter a number (n): "<<n<<endl;
        cin>>n;
    }
    while(n>=0);
    cout<<"you entered a negative number ";
    return 0;
}