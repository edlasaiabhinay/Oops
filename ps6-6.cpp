#include<iostream>
#include<string>
using namespace std;
class Complex{
private:
    int real;
    int imag;
public:
    Complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    friend void addComplex(Complex &c1, Complex &c2);
};
void addComplex(Complex &c1, Complex &c2)
{
    cout<<"the total sum is: "<<c1.real+c2.real<<"+"<<c1.imag+c2.imag<<"i"<<endl;
} 
int main (){
    Complex c1(2,3);
    c1.display();
    Complex c2(3,4);
    c2.display();
    addComplex(c1,c2);
    return 0;
}