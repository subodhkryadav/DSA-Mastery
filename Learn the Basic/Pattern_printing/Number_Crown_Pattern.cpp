#include<iostream>
using namespace std;
void Number_Crown_Pattern(int n){
    int spaces = 2 * (n - 1); 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        spaces=spaces-2;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    Number_Crown_Pattern(n);
    return 0;
}