#include<iostream>
#include<list>
using namespace std;

void lst(){
    list<int>ls;
    // method like
    ls.push_back(2);
    cout << "List elements after push back: ";
    for(auto x : ls) {
        cout << x << " ";
    }
    cout<<endl;

    ls.emplace_back(3);
    cout << "List elements after emplace back: ";
    for(auto x : ls) {
        cout << x << " ";
    }
    cout<<endl;
    
    ls.push_front(20);
    cout << "List elements after push front: ";
    for(auto x : ls) {
        cout << x << " ";
    }
    cout<<endl;
    
    ls.emplace_front(30);
    cout << "List elements after emplace front: ";
    for(auto x : ls) {
        cout << x << " ";
    }

}
int main(){
    lst();
    return 0;
}