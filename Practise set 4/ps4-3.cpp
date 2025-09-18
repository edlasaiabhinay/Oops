#include<iostream>
#include<string>
using namespace std;
class Complex{
private:
double real;
double imag;
public:
Complex(){
    real=0;
    imag=0;
}
Complex(double r){
    real=r;
    imag=0;
}
Complex(double r, double i)
{
    real=r;
    imag=i;
}
void  display(){
    cout<<real<<"+"<<imag<<"i"<<endl;
    
}
};

int main (){
    Complex c1; //default
    Complex c2(5); //real part
    Complex c3(5,6); //real and imag
    cout<<"c1: "<<endl;
    c1.display();
    cout<<"c2: "<<endl;   
    c2.display();
    cout<<"c3: "<<endl;
    c3.display();
return 0;
}