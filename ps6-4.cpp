#include<iostream>
#include<string>
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
    int area(){
        return length*breadth;
    }
    void display()
    {
        cout<<"area :"<<area()<<endl;
    }
    friend void compareArea(Rectangle &r1, Rectangle &r2);
};

void compareArea(Rectangle &r1, Rectangle &r2){
    if(r1.area()>r2.area())
    {
        cout<<"r1 has a largest area"<<endl;
    }
    else if (r1.area()<r2.area())
    {
        cout<<"r2 has a largest area"<<endl;
    }
    else
    {
        cout<<"both areas equal"<<endl;
    }
}

using namespace std;
int main (){
    Rectangle r1(10,20);
    Rectangle r2(20,30);
    r1.display();
    r2.display();
    compareArea(r1,r2);
    return 0;
}