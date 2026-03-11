#include<iostream>
#include<map>
using namespace std;

//define a function
void map_fun(){
    map<int,int> mpp;
    map<int,pair<int,int>>mpp1;
    map<pair<int,int>,int> mpp2;

    // word on the first map
    // insert some sort of the values
    cout<<"map: ";
    mpp.insert({1,3});
    mpp.insert({0,5});

    // print these mpp value

    for(auto x:mpp){
        cout<<"key: "<<x.first<<" values: "<<x.second<<endl;
    }
    cout<<endl;

    // work on the map1
    mpp1.insert({1,{2,5}});
    mpp1.insert({2,{0,2}});
    mpp1.insert({0,{1,3}});

    // print these elements
    cout<<"mpp1: ";
    for(auto x: mpp1){
        cout << "Key: " << x.first 
             << " -> Values: " << x.second.first << ", " << x.second.second 
             << endl;
    }
    // work on the mpp2
    mpp2.insert({{2,4},1});
    mpp2.insert({{0,8},0});
    mpp2.insert({{4,0},8});
    mpp2.insert({{5,1},9});

    cout<<"mpp2: "<<endl;
    for(auto x: mpp2){
        cout<<"keys: "<<x.first.first<<","<<x.first.second
                <<" "<<"values: "<<x.second<<endl;
    }
    cout<<endl;
}

//1.  similar to multimap 
    // it store the duplicate keys and ordered

//2. unorderd map 
    // it store the unique but not in orderd
    
// main function
int main(){
    map_fun();
    return 0;

}