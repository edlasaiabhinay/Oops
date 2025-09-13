// Write a program that defines a class Book with private members title
//  and price. Implement setters and getters for both members, and print
//  the details of the book object.

#include<iostream>
#include<string>
using namespace std;

class Book{
private:
    string title;
    float price;
public:
    void settitle(string t){
        title=t;
    }

    string gettitle(){
        cout<<"Title: "<<title<<endl;
        // return title;
    }

    void setprice(float p)
    {
        if(p>0){
            price=p;
        }
        else{
            cout<<"invalid price"<<endl;
        }
    }

    float getprice()
    {
        cout<<"Price: "<<price<<endl;
        // return price;
    }
    // void details(){
    //     cout<<"Title: "<<title<<endl;
    //     cout<<"Price: "<<price<<endl;
    // }

};

int main (){
    Book b1;
    b1.settitle("9/11");
    b1.setprice(1000.90);
    b1.gettitle();
    b1.getprice();
    // b1.details();
    return 0;
}