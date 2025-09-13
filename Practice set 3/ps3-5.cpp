#include<iostream>
#include<string>
using namespace std;
class Employee{
private:
    int e_id;
    float salary;

public:
    void set(int id,float s){
        e_id=id;
        salary=s;
    }
    void get(){
        cout<<"employee id: "<<e_id<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};
int main(){
    Employee e1,e2;
    e1.set(101,25000.50);
    e1.get();
    e2.set(102,30000.75);
    e2.get();
    return 0;
}