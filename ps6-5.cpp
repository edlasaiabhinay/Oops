#include<iostream>
#include<string>
using namespace std;
class Car{
private:
    string brand;
    int price;
public:
    Car (string b,int p)
    {
        brand=b;
        price=p;
    }
    ~Car (){
        cout<<"object is destroyed"<<endl;
    }
    void display(){
        cout<<"Car brand: "<<brand<<"\nPrice: "<<price<<endl;
    }
};
int main ()
{
    Car c1("bmw-x6",10000000);
    c1.display();

    return 0;
}