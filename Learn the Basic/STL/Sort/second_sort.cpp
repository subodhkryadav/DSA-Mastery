#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort_position_wise(){
    vector<int>a={1,2,5,4,6,8};
    sort(a.begin() + 2, a.begin() + 4);

    // print the sorted vector array
    cout<<"sorted vecot_array: ";
    for(auto x: a){
        cout<<x<<" ";
    }
    cout<<endl;
}

//main 
int main(){
    sort_position_wise();
    return 0;
}