#include<iostream>
#include<utility>
using namespace std;

void array_pair(){
    pair<int,int> arr[]={{3,4},{45,56},{79,44}};
    // now print the arry index wise
    cout<<"array_first_element: "<<arr[0].first<<endl;
    cout<<"array second of second element: "<<arr[1].second;
}
int main(){
    array_pair();
    return 0;
}