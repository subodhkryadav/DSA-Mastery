#include<iostream>
#include<stack>
using namespace std;

void stack_implimentation(){
    // definee the stack
    stack<int>st;
    // use to push method of the stack
    st.push(3);
    st.push(5);
    st.push(10);
    st.push(20);

    // now see the top of the stack
    cout<<"after pushing data, Top element is: ";
    cout<<st.top()<<endl;

    // use to pop operation of the stack
    st.pop();
    cout<<"Top of the stack after pop: "<<st.top()<<endl;

    //again push itm
    st.push(100);

    cout<<"top of the stack after push: "<<st.top()<<endl;

    cout<<"size of the stack is : "<<st.size()<<endl;

    cout<<"is stak is emplty: "<<st.empty()<<endl;

    // Now declare the another stack
    stack<int> st1;

    // swap the stack elements
    st1.swap(st);

    // Create a copy so the original 'st' isn't emptied
    stack<int> temp = st1; 

    cout << "Stack elements after swapping:  ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main(){
    stack_implimentation();
    return 0;
}