#include<iostream>
#include<vector>
#include<list>
using namespace std;

// insert_copy_swap_all in one funcion
void insert_copy_sqap_all(){
    // firstly take the user input vecor data
    int size;
    cout<<"Enter the size of the vector: ";
    cin>>size;

    // declare the vector
    vector<int> vec(size);

    // take the use input of the vector element:
    for(int i=0;i<vec.size();i++){
        cout<<"Enter the vector: "<<i+1<<" Element: ";
        cin>>vec[i];
    }
    cout<<"vector element: "<<endl;
    // now print those element because see the vetcor take input and stote the element
    for(auto x: vec){
        cout<<x<<" ";
    }
    cout<<endl;

    // Use to insert method to add the element at begning of the vector
    vec.insert(vec.begin(),100);

    cout<<"after insertion size of the vector is: "<<vec.size()<<endl;

    cout<<"After insertion: "<<endl;
    for(auto x: vec){
        cout<<x<<" ";
    }
    cout<<endl;


    // create another vector
    int n;
    cout<<"Enter the seze of the vector: ";
    cin>>n;
    // define the vector
    vector<int>new_vactor;

    int val; // Temporary variable to hold input
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " for the new_vector: ";
        cin >> val; 
    // This inserts the value at the very beginning of the vector
    new_vactor.insert(new_vactor.end(), val);
}

    // now print the element 
    cout<<"New_Vector elements: "<<endl;
    for(auto x: new_vactor){
        cout<<x<<" ";
    }
    cout<<endl;


    //copy to one vecot to another vector
    
    // declare one vector
    vector<int> copy_vect;

    // it copy all the element from the new_vactor(above vector)
    copy_vect.insert(copy_vect.begin(),new_vactor.begin(),new_vactor.end());
    
    // now print the copy_vect element
    cout<<"copy vector element: "<<endl;
    for(auto x:copy_vect){
        cout<<x<<" ";
    }
    cout<<endl;

    // another method also contain like 
    cout<<"pop back: "<<endl;
    copy_vect.pop_back();
    
    cout<<"copy vector element: "<<endl;
    for(auto x:copy_vect){
        cout<<x<<" ";
    }
    cout<<endl;

    // Now swap method that change the 1 vect or another vector
    // leus expample tothat new_vector go all ement to the copy_vect or vice versa

    new_vactor.swap(copy_vect);

    // print both vector
    cout<<"copy vector element: "<<endl;
    for(auto x:copy_vect){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"New_Vector elements: "<<endl;
    for(auto x: new_vactor){
        cout<<x<<" ";
    }
    cout<<endl;


    // Another method is clear
    // the clear do the empty of the vector
    
    // perform the clear on the copy_vector

    copy_vect.clear();
    // print the copy vecot
    cout<<"copy vector element: "<<endl;
    for(auto x:copy_vect){
        cout<<x<<" ";
    }
    cout<<endl;
}

// going forward to the main function
int main(){
    insert_copy_sqap_all();
    cout<<endl;
   

    return 0;

}
