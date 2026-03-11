#include<iostream>
using namespace std;
void Increasing_Number_Triangle_Pattern(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Increasing_Number_Triangle_Pattern(n);
    return 0;
}