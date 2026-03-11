#include<iostream>
using namespace std;

void Inverted_Numbered_Right_Pyramid(int n){
    for (int i=1;i<=n;i++){
        int count=1;
        for (int j=i;j<n+1;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Inverted_Numbered_Right_Pyramid(n);
    return 0;
}