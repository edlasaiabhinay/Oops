#include<iostream>
#include<string>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() {
        feet=0;
        inches=0;
    }

    Distance(int f) {
        feet = f;
        inches = 0;
    }

    Distance(int f, float i) {
        feet = f;
        inches=i;
    }

    void display() {
        cout << "feet:- " << feet << " And inches:- " << inches <<endl;
    }
};

int main() {
    Distance d1;
    Distance d2(5);
    Distance d3(5, 8);

    cout << "d1:\n";
    d1.display();

    cout << "\nd2:\n";
    d2.display();

    cout << "\nd3:\n";
    d3.display();

    return 0;
}
