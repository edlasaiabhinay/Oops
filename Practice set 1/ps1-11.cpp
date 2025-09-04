#include<iostream>
using namespace std;
int main (){
    int marks;
    cout<<"enter marks (0-100)"<<endl;
    cin>>marks;
    if(marks>=90)
    {
        cout<<"you got grade 'A'";
    }
    else if(marks>=80 && marks<=89)
    {
        cout<<"you got grade 'B'";
    }
    else if(marks>=70 && marks<=79)
    {
        cout<<"you got grade 'C'";
    }
    else if(marks>=60 && marks<=69)
    {
        cout<<"you got grade 'D'";
    }    
    else{
        cout<<"you got grade 'F'";
    }
    return 0;
}