#include<iostream>
using namespace std;

void array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" Element of the array: ";
        cin>>arr[i];
    }

    // the given input that store in the array
    // try to print even and odd contain in this array

    for(int i=0;i<size;i++){
        if (arr[i]%2==0){
            cout<<"Eenv: "<<arr[i]<<endl;
        }
        else{
            cout<<"Odd: "<<arr[i]<<endl;
        }
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    // Now call the function 
    array(arr,size);
    return 0;
}