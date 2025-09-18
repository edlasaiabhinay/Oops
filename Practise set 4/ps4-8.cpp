#include<iostream>
#include<string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int price;

public:
    Car(string b) {
        brand=b;
        model="dont know";
        price=0;
        
    }

    Car(string b,string m) {
        brand = b;
        model = m;
        price=0;
    }

    Car(string b, string m,int p) {
        brand = b;
        model=m;
        price=p;
    }

    void display() {
        cout << "Brand:- " << brand << "\nmodel:- " << model <<"\nprice:-"<<price<< endl;
    }
};

int main() {
    Car c1("Audi");
    Car c2("BMW","A6");
    Car c3("Suziki","grand vitara", 1500000);

    cout << "c1:"<<endl;
    c1.display();

    cout << "c2: "<<endl;
    c2.display();

    cout << "c3:"<<endl;
    c3.display();

    return 0;
}
