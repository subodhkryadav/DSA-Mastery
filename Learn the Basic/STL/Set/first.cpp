#include<iostream>
#include<set>
using namespace std;

void set_method() {
    set<int> st = {1, 2, 4, 1, 0, 30}; // Inserted duplicates and unsorted
    st.emplace(4);

    // Finding an element
    auto it = st.find(4);
    if(it != st.end()) cout << "Found: " << *it << endl;

    // Erase and Count
    st.erase(30);
    cout << "Count of 1: " << st.count(1) << endl; // Always 1 or 0 in a set

    // Bounds
    auto lb = st.lower_bound(2); // First element >= 2
    auto ub = st.upper_bound(4); // First element > 4
}

// main function
int main(){
    set_method();
    return 0;
}
