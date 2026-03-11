#include<iostream>
#include<vector>
using namespace std;

void vector_print_using_loop(){
    // how many number store the vector
    int size;
    cout<<"Enter the size of the vector: ";
    cin>>size;
    vector<int>vec(size);

    // now take the user input to insert the vector element
    for(int i=0;i<vec.size();i++){
        cout<<"Enter the vector "<<i+1<<" element: ";
        cin>>vec[i];
    }

    // now print these elment that user give to the vecor help with the loop
    for(vector<int>::iterator  it=vec.begin();it !=vec.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<"The value is printed now start to the next loop function"<<endl;

    // another loop function
    for(auto it=vec.begin();it !=vec.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    cout<<"The second loop also will be completed now start to the third loop section: "<<endl;

    //start the another loop function
    for(auto it :vec){
        cout<< it<<" ";
    }
    cout<<endl;
    cout<<"completed";
}

// creeate the main function
int main(){
  // call the functioon
  vector_print_using_loop();
  return 0;  
}