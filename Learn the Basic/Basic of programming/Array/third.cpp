#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size]; 

    // take user input 
    for(int i=0;i<size;i++){
        cout<<"Enter the array "<<i+1 <<" Element: ";
        cin>> arr[i];
    }

    // Now show the input that user give 
    for(int i=0;i<size;i++){
        cout<<i+1<<" values: "<<arr[i]<<endl;
    }
}