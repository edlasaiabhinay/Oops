#include<iostream>
#include<string>

using namespace std;
class Circle {
private:
    float radius;
    static float pi;
public:
    Circle (float r)
    {
        radius=r;
    }
    static void setPi(float value){
        pi=value;
    }
    int area()
    {
        return ((pi)*(radius*radius));
    }
    void display()
    {
        cout<<"area is: "<<area()<<endl;
    }
};
float Circle :: pi=3.14;
int main (){
    Circle c1(2);
    c1.display();
    Circle::setPi(5.12);
    c1.display();

    return 0;
}