#include<iostream>
#include<string>
using namespace std;
class Bank{
private:
int accountNumber;
int balance;
static float intrestrate;
public:
    Bank(int a, int b )
    {
        accountNumber=a;
        balance=b;
    }
    void deposit(int amount)
    {
        balance=balance+amount;
    }
    void withdraw(int amount)
    {
        balance=balance-amount;
    }
    void display(){
        cout<<"acc no: \n"<<accountNumber<<"\nbalance: \n"<<balance;
    }
    friend void applyintrest(Bank &t);
};
float Bank::intrestrate=5.0;
void applyintrest(Bank &t)
{
    t.balance=t.balance-(t.balance*(Bank::intrestrate/100));
}

int main (){
    Bank a1(234567,10000);
    a1.display();
    a1.deposit(200);
    a1.withdraw(1000);
    applyintrest(a1);
    a1.display();

    return 0;
}