#include<iostream>
#include<string>
using namespace std;

class Temperature{
private:
    float celsius;

public:
    void setCelsius(float c)
    {
        celsius=c;
    }
    void getFahrenheit()
    {
        float fahrenheit=(celsius*9/5)+32;
        cout<<"Temperature in Fahrenheit: "<<fahrenheit<<endl;
    }
};
int main(){
    Temperature t1;
    t1.setCelsius(37.0);
    t1.getFahrenheit();

    return 0;
}