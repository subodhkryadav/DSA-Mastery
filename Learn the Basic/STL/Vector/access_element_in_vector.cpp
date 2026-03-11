#include<iostream>
#include<vector>
using namespace std;
void access_element_of_an_vecote(){
    // take the user input size
    int size;
    cout<<"Enter the size of the vector: ";
    cin>> size;
    
    // declare the vector
    vector<int> v(size);
    cout<<"Give input of the vectore element:-->"<<endl;
    // take the use input to store the vactore x
    for(int i=0;i<v.size();i++){
        cout<<"Enter the "<<i+1<<" Element: ";
        cin>>v[i];
    }

    // now also print these entered values
    for(int i=0;i<v.size();i++){
        cout<<i+1<<" Element: "<<v[i]<<endl;
    }
}

// access another way to the vector
void access_another_way_vector_element(){
    int size;
    cout<<"Enter the size of the vectore: ";
    cin>>size;
    vector<int> v(size);
    cout<<"Give input of the vectore element:-->"<<endl;
    // take the use input to store the vactore x
    for(int i=0;i<v.size();i++){
        cout<<"Enter the "<<i+1<<" Element: ";
        cin>>v[i];
    }
    // now i accesss the vector element
    cout<<"Use to the begin method: ";
    vector<int>::iterator it =v.begin();
    cout<<*(it)<<" "; // it return the first index value 
    cout<<endl;

    cout<<"Use to the end method: ";
    vector<int>::iterator n =v.end();
    n--; // if i use to end() then it take the after the last value so use decrement it
    cout<<*(n)<<" "; 
    cout<<endl;

    cout<<"Use to the reverse end method: ";
    vector<int>::reverse_iterator x = v.rend(); 
    x++;
    cout<<*(n);
    cout<<endl;

    cout<<"use to the reverse begning end method: ";
    vector<int>::reverse_iterator m = v.rbegin();
    cout<<*(m);
    cout<<endl;
}
int main(){
    access_element_of_an_vecote();
    cout<<"Completed --- using loops"<<endl;
    access_another_way_vector_element();
    return 0;
}