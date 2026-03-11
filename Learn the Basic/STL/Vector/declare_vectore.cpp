#include<iostream>
#include<vector>
using namespace std;
void vectr(){
    vector<int>v;
    // print the vector values
    for(int x: v){
        cout<<x<<" "; // the result i am expecting is no print anyting at the console
    }
}

int main(){
    vectr();
    return 0;
}