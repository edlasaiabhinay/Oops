#include<iostream>
#include<string>
using namespace std;
class Accout {
private:
    int accNum;
    float balance;
public:
     void set(int acc, float bal)
    {
        accNum = acc;
        balance=bal;
    }
    void get(){
        cout<<"account number: "<<accNum<<endl;
        cout<<"balance: "<<balance<<endl;
    }
};
int main (){
    Accout a1;
    a1.set(233042,20000.50);
    a1.get();
    return 0;
}