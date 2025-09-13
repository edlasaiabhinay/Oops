#include<iostream>
#include<string>
using namespace std;
class Car{
private:
    string brand;
    string model;
public:
    void set(string b,string m){
        brand=b;
        model=m;
    }
    void get(){
        cout<<"brand: "<<brand<<endl;
        cout<<"model: "<<model<<endl;
    }
};
int main (){
    Car c[3];
    c[0].set("bin","afg");
    c[1].set("saddam","irq");
    c[2].set("davood","pak");
    for(int i=0;i<3;i++)
    {
        c[i].get();
    }
    return 0;
}