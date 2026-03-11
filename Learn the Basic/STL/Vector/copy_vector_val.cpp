#include<iostream>
#include<vector>
using namespace std;

void copy_vac_val(){
    // declare the first vectore values by default
    vector<int>vec_1(5,100);

    // copy the firat vector values into second vector values
    vector<int>vec_2(vec_1);

    // now print the vector values into the second vector
    for(int x: vec_2){
        cout<<x<<" ";
    }
}
int main(){
    copy_vac_val();
    // it return the 5 times 100 values
    return 0;
}