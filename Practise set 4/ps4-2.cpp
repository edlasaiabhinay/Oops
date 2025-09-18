#include<iostream>
#include<string>
using namespace std;

class Student{

private:
string name;
int age;
float marks;

public:
Student(string n,int a,float m)
{
    name=n;
    age=a;
    marks=m;
}
void details()
{
    cout<<"the name of student: "<<name<<endl;
    cout<<"the age of student: "<<age<<endl;
    cout<<"the marks of student: "<<marks<<endl;
}

};
int main (){
    Student s1("sai",20,89);
    s1.details();
    return 0;
}