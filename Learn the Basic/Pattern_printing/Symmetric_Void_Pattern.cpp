#include<iostream>
using namespace std;
void Symmetric_Void_Pattern(int n){
    int space=0;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        space=space+2;
        cout<<endl; 
    }
    space = 2 * n - 2; 
    for(int i=1; i<=n; i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        space-=2;
        cout<<endl; 
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Symmetric_Void_Pattern(n);
    return 0;
}