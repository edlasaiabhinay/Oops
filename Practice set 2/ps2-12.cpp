#include<iostream>
using namespace std;
int main (){
    for(int i=1;i<=50;i++){
    if(i%3==0 and i%5==0)
        {
            cout<<"FizzBuzz- "<<i<<endl;
        }
    else if(i%3==0)
        {
            cout<<"Fizz- "<<i<<endl;
        }
    else if(i%5==0)
        {
            cout<<"Buzz- "<<i<<endl;
        }
    }

    return 0;
}