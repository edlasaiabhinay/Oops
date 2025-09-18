#include<iostream>
#include<iostream>
using namespace std;
class Time{
private:
int hours;
int minutes;
int seconds;

public:
Time()
{
    hours=0;
    minutes=0;
    seconds=0;
}
Time(int h,int m)
{
    hours=h;
    minutes=m;
    seconds=0;
}
Time(int h,int m,int s)
{
    hours=h;
    minutes=m;
    seconds=s;
}
void display()
{
    cout<<"Hours: "<<hours<<"\nminutes: "<<minutes<<"\nseconds: "<<seconds<<endl;
}
};
int main (){
    Time t1;
    Time t2(5,30);
    Time t3(5,30,53);
    
    cout<<"t1: "<<endl;
    t1.display();
    cout<<"t1: "<<endl;
    t2.display();
    cout<<"t1: "<<endl;
    t3.display();


    return 0;

}