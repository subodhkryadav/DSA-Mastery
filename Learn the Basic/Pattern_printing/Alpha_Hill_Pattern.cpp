#include<iostream>
using namespace std;
void Alpha_Hill_Pattern(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        } 
        // char
        char ch='A';
        int break_point=(2*i-1)/2;
        for(char j=0;j<2*i+1;j++){
            cout<<ch;
            if (j<=break_point) {
                ch++;
            }
            else{
                ch--;
            }
        }

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }   
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Alpha_Hill_Pattern(n);
    return 0;
}
