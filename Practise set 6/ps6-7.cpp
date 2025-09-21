#include<iostream>
#include<string>
using namespace std;
class Counter{
private:
int count;
static int total_count;
public:
Counter (int c)
{
    count=c;
    total_count=total_count+1;
}
friend void total_count();
};

int Counter :: total_count=0;
void total_count()
{
    cout<<"total count: "<<Counter :: total_count<<endl;
}
int main (){
    Counter c1(5);
    Counter c2(3);
    Counter c3(42);
    total_count();

    return 0;
}