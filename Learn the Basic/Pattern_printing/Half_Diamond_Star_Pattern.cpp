#include<iostream>
using namespace std;
void uppar(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void lower(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    uppar(n);
    lower(n);
}