#include<iostream>
#include <string>
using namespace std;
class BankAccount{
private:
    int pin = 0;
    string name;
    int balance=0;
public:
    BankAccount(int p,int bal,string n)
    {
        this->pin=p;
        balance=bal;
        name=n;
    }
    void deposit(int amount)
    {
    int enteredPin;
    cout << "Enter pin number to deposit: ";
    cin >> enteredPin;
    if(enteredPin==pin)
        {
            balance=balance+amount;
            cout<<"deposited amount is: "<<amount<<endl;
        }
        else{
            cout<<"pin is incorrect"<<endl;
        }
    }
    void withdraw(int amount)
    {
       int enteredPin;
        cout << "Enter pin number to withdraw: ";
        cin >> enteredPin;
        if(enteredPin == pin)
        {
            if(amount<=balance)
            {
                balance=balance-amount;
                cout<<"withdrawn: "<<amount<<endl;
            }
            else
            {
                cout<<"Insufficient balance!"<<endl;
            }
        }
        else{
            cout<<"pin is incorrect"<<endl;
        }
    }
    void display(){
        cout<<"\nAccount holder: "<<name<<endl;
        cout<<"balance: "<<balance<<endl;
    }
};
int main (){
    BankAccount acc(1234, 5000,"Abhinay");
    acc.display();
    acc.deposit(1000);
    acc.withdraw(3000);
    acc.display();
    return 0;
}