#include<iostream>
#include<string>
using namespace std;
class University{
private:
    string name;
    int ranking;

public:
    void set(string n,int r)
    {
        name=n;
        ranking=r;
    }
    void get()
    {
        cout<<"name: "<<name<<endl;
        cout<<"ranking: "<<ranking<<endl;
    }

};

int main(){
    University u1;
    u1.set("abhinay",2);
    u1.get();
    return 0;
}