#include<iostream>
using namespace std;
class sport;
class student{
private:
    int marks; //pvt data
public:
    void setMarks(){
        cout<<"enter student marks: "<<endl;
        cin>>marks;
    }
    friend void showTotal(student s, sport sp);
};

class sport{
private:
    int score;
public:
    void setScore()
    {
        cout<<"enter score: "<<endl;
        cin>>score;
    }
    friend void showTotal(student s, sport sp);
};

void showTotal(student s, sport sp)
{
    int total =s.marks+sp.score;
    cout<<"total score: "<<total<<endl;
}

int main (){
    student s;
    sport sp;
    s.setMarks();
    sp.setScore();
    showTotal(s,sp); //call friend
    return 0;
}