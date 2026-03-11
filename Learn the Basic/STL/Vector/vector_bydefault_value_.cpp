#include<iostream>
#include<vector>
using namespace std;

void by_default_assign_value(){
    vector<int>vec(5,20);
    // now print the vector values
    for(int x: vec){
        cout<<x<<" ";
    }
}
int main(){
    by_default_assign_value();
    // it return the 5 times 20 values
    return 0;
}