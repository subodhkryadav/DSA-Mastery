#include<iostream>
#include<unordered_set>
using namespace std;

// define a functin 
void unord_set(){
    unordered_set<int>uset;
    // unordered set means it contain the unique but not in order maintain
    // insert some sort of the item in this set
    uset.insert(3);
    uset.insert(4);
    uset.insert(5);
    // now insert some sort of the duplicate
    uset.insert(3);
    uset.insert(3);
    uset.insert(3);
    uset.insert(5);
    
    // see the total inserted element 
    cout<<"set_element: ";
    for(auto x: uset){
        cout<<x<<" ";
    }
    cout<<endl;

    // agian print then see the order
    unordered_set<int>temp=uset;
    temp.insert(10);
    cout<<"set element after 10 insert: ";
    for(auto x: temp){
        cout<<x<<" ";
    }
    cout<<endl;

    // again i inset the data
    temp.insert(-1);
    cout<<"set element after -1 insert: ";
    for(auto x: temp){
        cout<<x<<" ";
    }
    cout<<endl;
 // it not maintain the ordered
}
// main function
int main(){
    unord_set();
    return 0; 
}