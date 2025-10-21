#include<iostream>
using namespace std;
class person{
private:
    string name;
    int age;
public:
    person(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
    }
};
class athlete{
private:
    string sport;
    int ranking;
public:
    athlete(string s,int r)
    {
        sport=s;
        ranking=r;
    }
    void display()
    {
        cout<<"sport: "<<sport<<endl;
        cout<<"ranking: "<<ranking<<endl;
    }
};
class sportsperson:public person,public athlete{
private:
    string team;
public:
    sportsperson(string n,int a,string s,int r,string t): person(n,a),athlete(s,r)
    {
        team=t;
    }
    void displaySP()
    {
        person::display();
        athlete::display();
        cout<<"team: "<<team<<endl;
    }
};
int main (){
    string name,sport,team;
    int age,ranking;
    
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter sport: ";
    cin >> sport;

    cout << "Enter ranking: ";
    cin >> ranking;

    cout << "Enter team: ";
    cin >> team;

    sportsperson s1(name,age,sport,ranking,team);
    cout<<"\n---Sports Person details---\n";
    s1.displaySP();
    return 0;
}