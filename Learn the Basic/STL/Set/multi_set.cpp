#include<iostream>
#include<set>
using namespace std;

void multiple_st(){
    multiset<int>mset; 
    // multiset it store the sorted order but not unique(duplicate is also allow in this set)

    mset.insert(2);
    mset.insert(3);
    mset.insert(2);
    mset.insert(3);
    mset.emplace(5);

    // now see the total emement present in the multiset
    cout<<"MultiSet Elements: ";
    for(auto x: mset){
        cout<<x<<" ";
    }
    cout<<endl;

    // now erase the elements
    mset.erase(2);
    
    cout<<"after erasing 2 see the elements of the multiset: ";
    for(auto x: mset){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"total count of 3 is: "<<mset.count(3)<<endl;

    // how to erase the single of the 3 element 
    mset.erase(mset.find(3));
    cout<<"after erasing single 3 total elements: ";
    for(auto x: mset){
        cout<<x<<" ";
    }
    cout<<endl;
}

// main function
int main(){
    multiple_st();
    return 0;
}