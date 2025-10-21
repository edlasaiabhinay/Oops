#include<iostream>
using namespace std;
class shape{
private:
    int length;
    int width;
public:
    shape(int length,int width)
    {
        this->length=length;
        this->width=width;
    }
};
class rectangle : public shape{
public:
    int area;
    rectangle(int length,int width): shape(length,width){
        area = length * width;

    }
    void display()
    {
        cout<<"the area is: "<<area<<endl;
    }
};
int main (){
    //rectangle r1(10,5);
    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    rectangle r1(length,width);
    r1.display();
    return 0;
}
