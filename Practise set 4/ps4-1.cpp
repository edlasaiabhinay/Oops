#include<iostream>
using namespace std;
class Rectangle{
private:
int length;
int breadth;
public:
Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
void area()
{
    int area=length*breadth;
    cout<<"the area of retangle is: "<<area<<endl;
}
};
int main (){
    Rectangle r1(10,20);
    r1.area();

    return 0;
}