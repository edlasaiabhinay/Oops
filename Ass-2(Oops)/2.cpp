#include<iostream>
using namespace std;
class dict{
    private:
    int values[100];
    string keys[100];
    int size=0;
    public:
    void store(string key,int value){
        keys[size] = key;
        values[size] = value;
        size++;
    }
    void search(string key) {
    for (int i = 0; i < size; i++) {
        if (keys[i] == key) {
            cout << "Value: " << values[i] << endl;
            return;
        }
    }
    cout<<"key not found"<<endl;
    }
    void display(){
        for(int i=0;i<size;i++)
        {
            cout<<keys[i]<<" -> "<<values[i]<<endl;
        }
    }

};
int main (){
    dict d;
    d.store("panduu",100);
    d.store("jamkaaya",50);
    d.search("panduu");
    d.display();
    return 0;
}