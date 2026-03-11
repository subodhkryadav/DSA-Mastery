#include<iostream>
using namespace std;
void Binary_Number_Triangle_Pattern(int n){
    int start;
    for(int i=0;i<n;i++){
        if (i%2==0){
            start=1;
        }
        else{
            start=0;
        }
        for (int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    Binary_Number_Triangle_Pattern(n);
    return 0;
}