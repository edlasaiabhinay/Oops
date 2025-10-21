#include<iostream>
using namespace std;
class Shape{
public:
    virtual float area()=0;
};

class Circle: public Shape{
private:
    float radius;
public:
    Circle(float r){
        radius=r;
    }
    float area(){
        return 3.14*radius *radius;
    }
};

int main (){
    Shape * s;
    Circle c(5);
    s=&c;
    cout<<"area of circle : "<<s->area()<<endl;
    return 0;
}