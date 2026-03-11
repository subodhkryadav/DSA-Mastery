#include<iostream>
using namespace std;

void modify(int x){
    x=x+10;
}

int main(){
    int x=5;
    modify(x);
    cout<<x<<endl;
    return 0;
}