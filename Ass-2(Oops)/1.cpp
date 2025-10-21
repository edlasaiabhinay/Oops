#include<iostream>
using namespace std;
class my_list{
    private:
        int arr[100];
        int size=0;
    public:
        void add_element(int value)
        {
            if(size<100)
            {
                arr[size]=value;
                size++;
            }
            else{
                cout<<"list is full"<<endl;
            }
        }
        void remove_element()
        {
            if(size>0)
            {
                size=size-1;
            }
            else{
                cout<<"empty array";
            }
        }
        void display()
        {
            cout<<"all elements:"<<endl;
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<endl;
            }
        }
        void get_size() {
            cout<<size<<endl;
        }

};
int main (){
    my_list l;
    l.add_element(10);
    l.add_element(20);
    l.add_element(30);
    l.display();
    l.remove_element();
    l.display();
    l.add_element(50);
    l.display();

    return 0;
}