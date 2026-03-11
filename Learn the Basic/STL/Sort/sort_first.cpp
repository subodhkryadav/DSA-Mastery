#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sorting_vector(){
    vector<int>a{2,3,51,22,7,1,6};
    sort(a.begin(),a.end());
    // now print the sorted vector
    for(auto x: a){
        cout<<x<<" ";
    }
}
// main functin
int main(){
    sorting_vector();
    return 0;
}