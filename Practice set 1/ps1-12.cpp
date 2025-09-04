#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int a,b,c;
    float root1,root2;
    cout<<"enter three numbers of the quadratic eqn : ";
    cin>>a>>b>>c;
    int d;
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        cout<<"the roots are real and distinct: "<<root1<<" and "<<root2<<endl;
    }
    else if(d==0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b+sqrt(d))/(2*a);
        cout<<"the roots are real and equal: "<<root1<<" and "<<root2<<endl;
    }
    else
    {
        cout<<"the roots are imaginary";
    }
    return 0;
}