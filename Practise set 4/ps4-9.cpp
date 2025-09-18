#include<iostream>
#include<string>
using namespace std;

class Emloyee {
private:
    string name;
    int id;
    int salary;

public:
    Emloyee(string n, int i) {
        name=n;
        id=i;
        salary=0;
        
    }

    Emloyee(string n,int i, int s) {
        name=n;
        id=i;
        salary=s;
    }


    void display() {
        cout << "Name :- " << name << "\nID :- " << id <<"\nsalary :-"<<salary<< endl;
    }
};

int main() {
    Emloyee e1("raju",240201);
    Emloyee e2("Abhinay",240202,200000);

    cout << "e1:"<<endl;
    e1.display();

    cout << "c2: "<<endl;
    e2.display();

    return 0;
}
