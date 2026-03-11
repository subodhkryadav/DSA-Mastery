#include<iostream>
using namespace std;
void Alpha_Ramp_Pattern(int n){
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
        ch=ch+1;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Alpha_Ramp_Pattern(n);
    return 0;
}