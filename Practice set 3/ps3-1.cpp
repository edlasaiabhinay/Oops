#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    string name;
    int age;
public:

    void setter(){
        // name="saddam";
        // age=50;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }
    void getter(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main (){
    Student s1;
    s1.setter();
    s1.getter();

    return 0;
}