#include<iostream>
#include<deque>
using namespace std;

void Deque(){
    deque<int>dq;
    dq.push_back(1);

    cout << "Deque elements after push back: ";
    for(auto x : dq) {
        cout << x << " ";
    }
    cout << endl;

    dq.emplace_back(3);

    cout << "Deque elements after emplace back: ";
    for(auto x : dq) {
        cout << x << " ";
    }
    cout << endl;
    
    dq.push_front(4);

    cout << "Deque elements after push fornt : ";
    for(auto x : dq) {
        cout << x << " ";
    }
    cout << endl;

    dq.emplace_front(5);
    
    cout << "Deque elements after emplace front : ";
    for(auto x : dq) {
        cout << x << " ";
    }
    cout << endl;

    dq.pop_back();

    cout << "Deque elements after pop back : ";
    for(auto x : dq) {
        cout << x << " ";
    }
    cout << endl;

    dq.pop_front();

    cout << "Deque elements after pop font : ";
    for(auto x : dq) {
        cout << x << " ";
    }
    cout << endl;

    dq.back();

    cout << "Deque elements after back : ";
    for(auto x : dq) {
        cout << x << " ";
    }
    cout << endl;

    dq.front();

     // Using a range-based loop
    cout << "Deque elements after front : ";
    for(auto x : dq) {
        cout << x << " ";
    }
    cout << endl;

}
// main function
int main(){
    Deque();
    return 0;
}