#include<iostream>
using namespace std;
void Reverse_Letter_Triangle_Pattern(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+(n-i-1);j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin >> n;
    Reverse_Letter_Triangle_Pattern(n);
    return 0;
}