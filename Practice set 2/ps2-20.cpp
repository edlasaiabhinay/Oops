//  Write a program to keep taking marks as input until the user enters
//  −1, then print the average of the entered marks
#include<iostream>
using namespace std;
int main (){
    int n,sum=0,count=0;
    float avg;
    do {
    cout<<"enter a number(-1 to stop): "<<endl;
    cin>>n;
    if(n!=-1){
        sum=sum+n;
        count++;
    }
    }
    while(n!=-1);
    avg=(sum)/(count);
    cout<<"the avg entered marks is: "<<avg<<endl;
    
    return 0;
}