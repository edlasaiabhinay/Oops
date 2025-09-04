#include<iostream>
using namespace std;
int main (){
    int n,largest=0,digit;
    cout<<"enter a number to find its largest digit: ";
    cin>>n;
    do{
        digit=n%10;
        if(digit>largest)
        {
            largest=digit;
        }
        n=n/10;
    }while(digit!=0);
    cout<<"the largest digit of number("<<n<<") is :- "<<largest<<endl;
    return 0;
}