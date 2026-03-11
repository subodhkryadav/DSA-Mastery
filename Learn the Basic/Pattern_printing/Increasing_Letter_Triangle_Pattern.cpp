#include<iostream>
using namespace std;
void Increasing_Letter_Triangle_Pattern(int n){
    for(int i=1;i<=n;i++){
        for(char j='A';j<'A'+i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Increasing_Letter_Triangle_Pattern(n);
    return 0;
}