#include<iostream>
#include<string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int price;

public:
    Book(string t) {
        title = t;
        author = "Unknown";
        price = 0;
    }

    Book(string t, string a) {
        title = t;
        author = a;
        price = 0;
    }

    Book(string t, string a, int p) {
        title = t;
        author = a;
        price = p;
    }

    void display() {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: " << price << endl;
    }
};

int main() {
    Book b1("HYD");
    Book b2("SEC", "god");
    Book b3("PRG", "me", 10000);

    cout << "b1:\n";
    b1.display();

    cout << "\nb2:\n";
    b2.display();

    cout << "\nb3:\n";
    b3.display();

    return 0;
}
