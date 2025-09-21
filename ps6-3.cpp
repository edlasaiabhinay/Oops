#include<iostream>
#include<string>
using namespace std;
class Employee{
private:
int id;
float salary;
public:
static int total_count;
    Employee(int i,float s)
    {
        id=i;
        salary=s;
        total_count=total_count+1;
    }
    void display()
    {
        cout<<"id: "<<id<<"\nsalary: "<<salary<<"\ntotal_count: "<<total_count<<endl;
        // cout<<"id: "<<id<<"\nsalary: "<<salary<<endl;
    }
    // friend void cunt();
    
};
int Employee:: total_count=0;
// void cunt()
// {
//     cout<<"total count: "<<Employee:: total_count<<endl;
// }
int main()
{
    Employee e1(23242,30000);
    e1.display();
    Employee e2(23243,30003);
    e2.display();
    // cunt();
    return 0;
}
