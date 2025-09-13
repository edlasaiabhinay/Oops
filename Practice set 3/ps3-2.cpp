#include<iostream>
#include<string>
using namespace std;
class BankAccount{
private:
    int balance;
public:
    void setter(){
        cout<<"enter balance: "<<endl;
        cin>>balance;
    }
    void getter(){
        if(balance>=0)
        {
        cout<<"the balance is: "<<balance<<endl;
        }
        else{
            cout<<"error! negative balance"<<endl;
        }
    }

};
int main (){
    BankAccount b1;
    b1.setter();
    b1.getter();

    return 0;
}