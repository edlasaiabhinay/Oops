#include<iostream>
using namespace std;
class person{
private:
    string name;
    int age;
public:
    void setPerson(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class employee : public person{
public:
    int id;
    int salary;
public:
    void setEmployee(int id, double s) {
        id = id;
        salary = s;
    }
    void displayEmployee() {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
    
};
class manager : public employee{
private:
    string department;
    double bonus;

public:
    void setManager(string dept, double b) {
        department = dept;
        bonus = b;
    }

    void displayManager() {
        cout << "Department: " << department << endl;
        cout << "Bonus: " << bonus << endl;
    }
};

int main (){
    manager m1;
    m1.setPerson("pandu",17);
    m1.setEmployee(101,75000);
    m1.setManager("it",5000);
    cout<<"----manager display----"<<endl;
    m1.displayPerson();
    m1.displayEmployee();
    m1.displayManager();
    return 0;
}