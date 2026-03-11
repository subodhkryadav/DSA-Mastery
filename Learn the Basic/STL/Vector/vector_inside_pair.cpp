#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void vector_inside_pair(){
    vector<pair<int,int>>vec;

    // using the push back
    vec.push_back({4,5});
    // print the values of the vector
    for(auto x: vec){
        cout<<x.first<<" "<<x.second<<" ";
    }
    cout<<endl;

    // use to the emplace_back
    vec.emplace_back(1,2);
    for(auto x: vec){
        cout<<x.first<<" "<<x.second<<" ";
    }
    cout<<endl;
}
int main(){
    vector_inside_pair();
    return 0;
}