#include<iostream>
using namespace std;
int main (){
    int sum=0;
    for( int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    cout<<"total sum of all even numbers from 1 to 100 is:  "<<sum<<endl;
    return 0;
}