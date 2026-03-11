#include<iostream>
using namespace std;
void Inverted_Right_Pyramid(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of N: ";
    cin>> n;
    Inverted_Right_Pyramid(n);
    return 0;
}