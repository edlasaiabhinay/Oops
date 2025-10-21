#include<iostream>
using namespace std;
class Animal{ //base
public:
    void speak() { //overloading
        cout << "Animal makes a sound" << endl;
    }

    void speak(string sound){ 
        cout<<"Animals says: "<<sound<<endl;
    }
    virtual void move(){  
        cout<<"Animal moves"<<endl;
    }
};
class Dog : public Animal { //derived class 
public:
    void move() override {      // Function Overriding
        cout << "Dog runs" << endl;
    }
};

int main (){
    Animal a;
    Dog d;
    a.speak();
    a.speak("roar");
    Animal * ptr=&d;
    ptr->move();
    return 0;
}