#include<iostream>
#include<utility>
using namespace std;

void pair_inside_pair(){
    pair<int,pair<int,int>> p = {2,{33,55}};
    // print these kind of thing

    cout<<"first pair: "<<p.first<<endl;
    cout<<"second first: "<<p.second.first<<endl;
    cout<<"second second: "<<p.second.second;
}
int main(){
    pair_inside_pair();
    return 0;
}