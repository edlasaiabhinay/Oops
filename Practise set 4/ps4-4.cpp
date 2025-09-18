#include<iostream>
#include<string>
using namespace std;

class BankAccount{
private:
int accoutNumber;
float balance;

public:
BankAccount()
{
    accoutNumber=0;
    balance=0;
}
BankAccount(int a)
{
    accoutNumber=a;
    balance=0;
   
}
BankAccount(int a, float b)
{
    accoutNumber=a;
    balance=b;
}
void display(){
    cout<<"Account number: "<<accoutNumber<<"\nBalance: "<<balance<<endl;
}
};
int main (){
    BankAccount a1;
    BankAccount a2(22304);
    BankAccount a3(22304,50000);
    cout<<"a1: "<<endl;
    a1.display();
    cout<<"a2: "<<endl;
    a2.display();
    cout<<"a3: "<<endl;
    a3.display();
    return 0;
}