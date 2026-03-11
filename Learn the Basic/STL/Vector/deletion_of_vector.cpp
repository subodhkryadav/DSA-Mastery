#include<iostream>
#include<vector>
using namespace std;

void delete_of_vector_element(){
    // firstly take the user input of the vector_elements
    int size;
    cout<<"Enter the size of the vector: ";
    cin>>size;

    //declare the vector
    vector<int>vec(size);

    //input of the vector_elemet
    for(int i=0;i<vec.size();i++){
        cout<<"Enter the vector "<<i+1<<" Element: ";
        cin>>vec[i];
    }
    cout<<"Inpute completed: "<<endl;
    // once print then i will delete it because 
        // firstly show the vector contain the element
    for(auto x: vec){
        cout<<x<<" ";
    }
    cout<<endl<<" ";

    // delete some of the element specifically
    vec.erase(vec.begin());
    // this time delete teh first element of the vector
    cout<<"starting element deleted successfully. now current element is: "<<endl;
    //now see the result means now check the total elements:

    for(auto x: vec){
        cout<<x<<" ";
    }
    cout<<endl;

    //delete the whole delement from the vector
    for(auto x : vec){
        vec.erase(vec.begin());
    }
    cout<<endl;
    cout<<"All element deleted successfully. Now current element present in the vector is: "<<endl;

    for(auto x: vec){
        if (vec.size()==0){
            cout<<"not any element";
        }
        else{
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    if (vec.size()==0){
        cout<<"There is no element rest in the vector all are deleted";
    }
    else{
        cout<<"some element are rest to the vector";
    }
}

// going forward to the main function
int main(){
    delete_of_vector_element();
    return 0;
}