#include<iostream>
using namespace std;

class Sort{
private:
    int arr[100];
    int size;
public:
    void inputData(){
        cout<<"enter no.of elements:";
        cin>>size;
        cout << "Enter elements:\n";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void displayData()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    void bubbleSort()
    {
        for(int i=0;i<size-1;i++)
        {
            for(int j=0;j<size-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }

    void insertionSort()
    {
        for(int i=1;i<size;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }

};
int main (){
    Sort s;          // create object
    s.inputData();     // input array
    cout << "Original array: "<<endl;
    s.displayData();   // display original array

    s.bubbleSort();    // sort array
    cout << "\nSorted array: "<<endl;
    s.displayData();   // display sorted array

    s.inputData();     // input again for insertion sort
    s.insertionSort(); // sort array
    cout << "\nSorted array using Insertion Sort: ";
    s.displayData();   // display sorted array

    return 0;
}