#include<iostream>
#include<string>
using namespace std;
class Vehicle {
public:
    string brand;
    Vehicle (string b)
    {
        brand=b;
    }
};
class Car : public Vehicle
{
    public:
        string model;
    Car ( string brand, string model): Vehicle(brand)
    {

    }
    void getInfo()
    {
        cout<<"brand: "<<brand<<endl;
        cout<<"model: "<<model<<endl;
    }
};
int main (){
    Car c1("bmw","x6");
    c1.getInfo();
    return 0;
}