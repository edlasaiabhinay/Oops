#include<iostream>
#include<string>

using namespace std;
class Student{
private:
    string name;
    int rollNumber;
    int marks;
public:
    Student()
    {
        name="";
        rollNumber=0;
        marks=0;
    }
    Student(string n,int r)
    {
        name=n;
        rollNumber=r;
        marks=0;
    }
    Student(string n,int r,int m)
    {
        name=n;
        rollNumber=r;
        marks=m;
    }
    void display()
    {
        cout<<"name: \n"<<name<<"\nrollNumber: \n"<<rollNumber<<"\nmarks: \n"<<marks<<endl;
    }

};
int main (){
    Student s1;
    Student s2("sai",20);
    Student s3("abhinay",21,99);
    cout<<"s1: "<<endl;
    s1.display();
    cout<<"s2: "<<endl;
    s2.display();
    cout<<"s3: "<<endl;
    s3.display();
    return 0;
}