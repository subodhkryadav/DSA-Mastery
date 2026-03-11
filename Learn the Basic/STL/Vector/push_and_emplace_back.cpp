#include<iostream>
#include<vector>
using namespace std;

void push_emplace(){
    vector<int>v;
    //push_back method
    v.push_back(1);
    // print the v
    cout<<"this is push_back: ";
    for(int x: v){
        cout<<x<<" "<<endl;
    }
    // now emplace_back method
    v.emplace_back(4.5);
    cout<<"This is emplace_back: ";
    // again print the values of v
    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    // here find the size of the v
    cout<<"size of vector: "<<v.size();
}
int main(){
    push_emplace();
    return 0;
}